clear;

%% Sim paraters
dt = 1/50;
simulation_time = 60;

%% Aircraft parameters
b = 9.17; % Wing Span [m]
c = 2.15; % wing mean aerodynamic chord [m]
s = 18.8; % wing area (reference) [m2]

m = 6000; % mass [kg]
cg = 0.23; % center of gravity from nose [% of c]
cg_ref = 0.245; % reference center of gravity from nose [% of c] - from DATCOM tests?

inertia    = [15713.8 37742.6 50706.9 2779.27];    %Inertia components Ixx,Iyy,Izz,Ixz

%% Trim Settings
dE_ss     = 0.01; % steady state elevator deflection [rad]
alpha_ss  = deg2rad(1); % steady state angle of attack [rad]
thrust_ss = 50; % steady state thrust [N]

%% Initialisation
z_init = 100; % Initial height [m]
TAS_init = 100; % Initial velocity [m/s]
theta_init = alpha_ss; % Initial pitch [rad]

u_init = TAS_init*cos(alpha_ss); % Initial velocity - longitudinal component
v_init = 0; % Initial velocity - lateral component
w_init = TAS_init*sin(alpha_ss); % Initial velocity - vertical component

%% Control selection
manual_control_enable = 0; % Enable manual control (Joystick)
vector_control_enable = 0; % Enable control with scheduled vectors
automatic_control_enable = 1; % Enable automatic control system (PM,AM)

% Manual control
cVect  = [0 0 0 0 0 0];        % scheduling vector
daVect = [0 0 0 0 0 0];
deVect = [0 0 0 0 0 0];
drVect = [0 0 0 0 0 0];
ThVect = [0 0 0 0 0 0];

save("sim_config.mat"); % same configuration parameters

model_name = "simulator_v1";
simIn = Simulink.SimulationInput(model_name);
simIn = loadVariablesFromMATFile(simIn,"sim_config.mat");
options = simset('SrcWorkspace','base');

out = sim(model_name,[],options);
disp("SIM COMPLETE");

