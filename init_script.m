clear; close all;
addpath("blocks\");

%% Sim paraters
dt = 1/50;
simulation_time = 20;

%% Aircraft parameters
% C172
% https://ntrs.nasa.gov/api/citations/19800001985/downloads/19800001985.pdf%0A
% b = 11; % Wing Span [m]
% c = 1.49; % wing mean aerodynamic chord [m]
% s = 16.2; % wing area (reference) [m2]
% 
% m = 1043; % mass [kg]
% cg = 0.23; % center of gravity from nose [% of c]
% cg_ref = 0.230; % reference center of gravity from nose [% of c] - from DATCOM tests?
% 
% inertia    = [1395 1480 2563 123];    %Inertia components Ixx,Iyy,Izz,Ixz % https://www.researchgate.net/figure/Mass-geometry-parameters-and-performance-specifications-for-Cessna-172_fig10_309468360

%L159
m = 6000;     %L159T2 wet wing
cg = 0.25;
cg_ref = 0.26;

b = 9;
c = 2;
s = 20;
inertia    = [14000 40000 55000 3000];

inertia = [ inertia(1), 0, -inertia(4); 
            0, inertia(2), 0; 
            -inertia(4), 0, inertia(3)];

%% Environmental conditions
rho = 1.293;

%% Initialisation
z_init = 1000; % Initial altitude [m]
TAS_init = 150; % Initial velocity [m/s]

% Trim
roll_init = 0;
maxThrust = 16000; %[N]
% [alss,thrustss,dess] = getTrim(TAS_init, m, cg, cg_ref, b, c, s, rho, roll_init, maxThrust, al_vec, cd_vec, cl_vec, cm_vec);
[alss,thrustss,dess] = getTrim(TAS_init, m, cg, cg_ref, c, rho, roll_init, maxThrust);

dE_ss     = dess; %0.001; % steady state elevator deflection [rad]
alpha_ss  = alss; %deg2rad(1); % steady state angle of attack [rad]
thrust_ss = thrustss; %5000; % steady state thrust [N]

theta_init = alpha_ss; % Initial pitch [rad]

u_init = TAS_init*cos(alpha_ss); % Initial velocity - longitudinal component % assumes beta = 0 
v_init = 0; % Initial velocity - lateral component
w_init = TAS_init*sin(alpha_ss); % Initial velocity - vertical component

%% Control selection
manual_control_enable = 0; % Enable manual control (Joystick)
vector_control_enable = 1; % Enable control with scheduled vectors
automatic_control_enable = 0; % Enable automatic control system (PM,AM)

% Manual control
cVect  = [0 1 1+dt 8 8+dt simulation_time]; % scheduling vector
daVect = [0 0 0 0 0 0];
deVect = [0 0 -0.02 -0.02 0 0]+dess;
drVect = [0 0 0 0 0 0];
ThVect = [0 0 0 0 0 0];

save("sim_config.mat"); % save configuration parameters for repeated tests

state_bus = createBus(); % Create state variable bus object

model_name = 'simulator_v1'; %"simulator_v1_noRef";
simIn = Simulink.SimulationInput(model_name);
simIn = loadVariablesFromMATFile(simIn,"sim_config.mat"); % load workspace variables into simulink
options = simset('SrcWorkspace','base'); % Evaluate functions in model workspace

out = sim(model_name,[],options); % Execute simulation
disp("SIM COMPLETE");


%% Read and Visualize data
state_values = out.logsout{2}.Values;
t_vect = state_values.control_vect.Time;
control_vect = state_values.control_vect.Data;
position = state_values.position.Data;
vel_ground = state_values.vel_ground.Data;
vel_body = state_values.vel_body.Data;
accel_ground = state_values.accel_ground.Data;
accel_body = state_values.accel_body.Data;
attitude = state_values.attitude.Data;
ang_vel_body = state_values.ang_vel_body.Data;
ang_accel_body = state_values.ang_accel_body.Data;
al_be = state_values.al_be.Data;


% Plots
figure(1) % Position
ax1 = tight_subplot(3,1,[.08 .05],[.05 .08],[.05 .03]);
plot(ax1(1),t_vect, position(:,1)); title(ax1(1),'x [m]');
plot(ax1(2),t_vect, position(:,2)); title(ax1(2),'y [m]');
plot(ax1(3),t_vect, position(:,3)); title(ax1(3),'z [m]');

figure(2) % Velocity Ground
ax2 = tight_subplot(3,1,[.08 .05],[.05 .08],[.05 .03]);
plot(ax2(1),t_vect, vel_ground(:,1)); title(ax2(1),'V_x [m/s]');
plot(ax2(2),t_vect, vel_ground(:,2)); title(ax2(2),'V_y [m/s]');
plot(ax2(3),t_vect, vel_ground(:,3)); title(ax2(3),'V_z [m/s]');

figure(3) % attitude
ax3 = tight_subplot(3,1,[.08 .05],[.05 .08],[.05 .03]);
plot(ax3(1),t_vect, rad2deg(attitude(:,1))); title(ax3(1),'psi [rad]');
plot(ax3(2),t_vect, rad2deg(attitude(:,2))); title(ax3(2),'theta [rad]');
plot(ax3(3),t_vect, rad2deg(attitude(:,3))); title(ax3(3),'phi [rad]');

figure(4) % control_vect
ax4 = tight_subplot(2,2,[.08 .05],[.05 .08],[.05 .03]);
plot(ax4(1),t_vect, control_vect(:,1)); title(ax4(1),'da [rad]');
plot(ax4(2),t_vect, control_vect(:,2)); title(ax4(2),'de [rad]');
plot(ax4(3),t_vect, control_vect(:,3)); title(ax4(3),'dr [rad]');
plot(ax4(4),t_vect, control_vect(:,4)); title(ax4(4),'thrust [N]');

% C172
% function [alss,thrustss,dess] = getTrim(Vt,mass,cg,cgRef, b, c, s, rho,phi,maxThrust, al_vec, cd_vec, cl_vec, cm_vec)
%     psi = 0; be = 0; %assumed
%     dU = []; dV = []; dW = [];
%     thrustss = []; dess = [];
% 
%     da = []; M =[]; dz = [];
% 
%     options = optimset('TolX',1e-6);
%     [alss,dz] = fminbnd(@findAOA,deg2rad(-1),deg2rad(14),options);
% 
%     da = [];
%     
%     function dz = findAOA(al) 
%         theta   = al;
% 
%         [thrustss,da]  = fminbnd(@findThrust, 0, maxThrust, options);
%         dz      = sqrt(dW^2);                   % minimum vertical motion - todo:convert to ground first
%         
%         function da = findThrust(thrust)
%             [dess,M] = fminbnd(@findDeflection,deg2rad(-15),deg2rad(10),options); 
%             da   = sqrt(dU^2 + dV^2 + dW^2);	% minimum acceleration  
% 
%             function M = findDeflection(de)
%                 % Assumes zero da,dr,beta,p,q,r
%                 qd      = 0.5*rho*Vt^2;
%                 
%                 % Drag
%                 CD = interp1(al_vec,cd_vec,al);
%                 
%                 % Lift
%                 CL = interp1(al_vec,cl_vec,al);
%                 
%                 % Pitch moment
%                 cm0 = 0.07;
%                 cmde = -1.28;
%                 cmal = -0.9;
%                 %CM = interp1(al_vec,cm_vec,al) + cmde*de;
%                 
%                 CM = cm0+cmal*al+cmde*de;
%                 
%                 %% Wind to body transformation
%                 CX0 = CL*sin(al)- CD*cos(al)*cos(be);
%                 CY0 = -CD*sin(be);
%                 CZ0 = (-CL*cos(al) - CD*cos(be)*sin(al));
%                 
%                 Cl0 = -CM*cos(al)*sin(be);
%                 Cm0 =         CM*cos(be);
%                 Cn0 = -CM*sin(al)*sin(be);
% 
%                 
%                 TbE =   [1 0 0; 0 cos(phi) sin(phi); 0 -sin(phi) cos(phi);]*...
%                         [cos(theta) 0 -sin(theta); 0 1 0; sin(theta) 0 cos(theta);]*...
%                         [cos(psi) sin(psi) 0; -sin(psi) cos(psi) 0; 0 0 1;];
%                 Fg      = TbE*[0;0;mass*9.80665]; 	
% 
%                 Fa      = 0.5*[CX0;...
%                            CY0;...
%                            CZ0]*qd*s;
% 
%                 X       =  	thrust + Fa(1) + Fg(1);
%                 Y       =  	Fa(2) + Fg(2);
%                 Z       =  	Fa(3) + Fg(3);
% 
%                 dUVW    = 	[X;Y;Z]/mass; 
%                 dU      =  	dUVW(1);
%                 dV      =  	dUVW(2);
%                 dW      =  	dUVW(3);
%             
%                 %CM
%                 M = sqrt( (0.5*Cm0*qd*s*c + (cgRef-cg)*c*Fa(3))^2 );
%             end
%         end
%     end
% end

%L39
function [alss,thrustss,dess] = getTrim(Vt,mass,cg,cgRef, c, rho,phi,maxThrust)
    psi = 0; be = 0; %assumed
    dU = []; dV = []; dW = [];
    thrustss = []; dess = [];

    da = []; M =[]; dz = [];

    options = optimset('TolX',1e-6);
    [alss,dz] = fminbnd(@findAlpha,deg2rad(-1),deg2rad(14),options);

    da = [];
    
    function dz = findAlpha(al) 
        theta   = al;

        [thrustss,da]  = fminbnd(@findThrust, 0, maxThrust, options);
        dz      = sqrt(dW^2);                   % minimum vertical motion - todo:convert to ground first
        
        function da = findThrust(thrust)
            [dess,M] = fminbnd(@findDeflection,deg2rad(-15),deg2rad(10),options); 
            da   = sqrt(dU^2 + dV^2 + dW^2);	% minimum acceleration  

            function M = findDeflection(de)
                % Assumes zero da,dr,beta,p,q,r
                da = 0; dr = 0; p = 0; q = 0; r = 0;
                qd      = 0.5*rho*Vt^2;
                S       = 18.8;
                c       = 2.15;

                % Drag
                CD = 0.03 + 0.005*al;
                
                % Lift
                CL = 0.22 + 0.1*al + 0.01*de;

                % Pitch moment
                CM = 0.003-0.01*de;
                
                %% Y %%
                CYbeta = -1;         
                CYda = -0.02;                                                  
                CYdr = 0.192;
                
                %% Z %%
                Czq = -1.45;
                
                %% m %%
                Cmq = -4.9;

                %% Wind to body transformation
                CX0 = CL*sin(al)- CD*cos(al)*cos(be);
                CY0 = -CD*sin(be);
                CZ0 = (-CL*cos(al) - CD*cos(be)*sin(al));
                CM0 = CM*cos(be);

                CX = CX0;                                              
                CY = CY0 + CYbeta*be + CYda*da + CYdr*dr;                                
                CZ = CZ0 + c*q*Czq/Vt;
                CM = CM0 + c*q*Cmq/Vt;
                
                TbE =   [1 0 0; 0 cos(phi) sin(phi); 0 -sin(phi) cos(phi);]*...
                        [cos(theta) 0 -sin(theta); 0 1 0; sin(theta) 0 cos(theta);]*...
                        [cos(psi) sin(psi) 0; -sin(psi) cos(psi) 0; 0 0 1;];

                Fg      = TbE*[0;0;mass*9.80665]; 	

                Fa      = [CX;...
                           CY;...
                           CZ]*qd*S;

                X       =  	thrust + Fa(1) + Fg(1);
                Y       =  	Fg(2);
                Z       =  	Fa(3) + Fg(3);

                dUVW    = 	[X;Y;Z]/mass; 
                dU      =  	dUVW(1);
                dV      =  	dUVW(2);
                dW      =  	dUVW(3);
            
                %CM
                M = sqrt( (CM*qd*S*c + (cgRef-cg)*c*Fa(3))^2 );
            end
        end
    end
end

function state_bus = createBus()
    % Create bus object
    state_bus = Simulink.Bus;
    
    state_bus.Elements(1) = Simulink.BusElement;
    state_bus.Elements(1).Name = 'control_vect';
    state_bus.Elements(1).Dimensions = 4;
    
    state_bus.Elements(2) = Simulink.BusElement;
    state_bus.Elements(2).Name = 'position';
    state_bus.Elements(2).Dimensions = 3;
    
    state_bus.Elements(3) = Simulink.BusElement;
    state_bus.Elements(3).Name = 'vel_ground';
    state_bus.Elements(3).Dimensions = 3;
    
    state_bus.Elements(4) = Simulink.BusElement;
    state_bus.Elements(4).Name = 'vel_body';
    state_bus.Elements(4).Dimensions = 3;
    
    state_bus.Elements(5) = Simulink.BusElement;
    state_bus.Elements(5).Name = 'accel_ground';
    state_bus.Elements(5).Dimensions = 3;
    
    state_bus.Elements(6) = Simulink.BusElement;
    state_bus.Elements(6).Name = 'accel_body';
    state_bus.Elements(6).Dimensions = 3;
    
    state_bus.Elements(7) = Simulink.BusElement;
    state_bus.Elements(7).Name = 'attitude';
    state_bus.Elements(7).Dimensions = 3;
    
    state_bus.Elements(8) = Simulink.BusElement;
    state_bus.Elements(8).Name = 'ang_vel_body';
    state_bus.Elements(8).Dimensions = 3;

    state_bus.Elements(9) = Simulink.BusElement;
    state_bus.Elements(9).Name = 'ang_accel_body';
    state_bus.Elements(9).Dimensions = 3;

    state_bus.Elements(10) = Simulink.BusElement;
    state_bus.Elements(10).Name = 'al_be';
    state_bus.Elements(10).Dimensions = 2;
end

% m(U˙ − rV + qW ) = Xa + Xg + Xc + Xp + Xd
% m(V˙ − pW + rU) = Ya + Yg + Yc + Yp + Yd
% m(W˙ − qU + pV) = Za + Zg + Zc + Zp + Zd
% Ixp˙ − (Iy − Iz)qr − Ixz(pq + ˙r) = La + Lg + Lc + Lp + Ld
% Iyq˙ + (Ix − Iz)pr + Ixz(p2 − r2) = Ma + Mg + Mc + Mp + Md
% Izr˙ − (Ix − Iy)pq + Ixz(qr − ˙p) = Na + Ng + Nc + Np + Nd

% X_ge = -mgsin(theta)
% z_ge = mgcos(theta)