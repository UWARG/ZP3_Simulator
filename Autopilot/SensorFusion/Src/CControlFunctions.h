/*
 * Functions.h
 *
 *  Created on: 5 oct. 2019
 *      Author: Daniel Mårtensson
 */

#ifndef CCONTROLFUNCTIONS_H
#define CCONTROLFUNCTIONS_H

/*
 * Necessary libraries
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>// required for FLT_EPSILON
#include <stdbool.h>
#define MAX_ITERATION_COUNT_SVD 30   // Maximum number of iterations for svd_jacobi_one_sided.c

/*
 * Control engineering
 */
void mpc(double* A, double* B, double* C, double* x, double* u, double* r, uint8_t ADIM, uint8_t YDIM, uint8_t RDIM, uint8_t HORIZON, uint8_t ITERATION_LIMIT, bool has_integration);
void kalman(double* A, double* B, double* C, double* K, double* u, double* x, double* y, uint8_t ADIM, uint8_t YDIM, uint8_t RDIM);
void lqi(double* y, double* u, double qi, double* r, double* L, double* Li, double* x, double* xi, uint8_t ADIM, uint8_t YDIM, uint8_t RDIM, uint8_t ANTI_WINDUP);
void mrac(double limit, double gain, double* y, double* u, double* r, double* I1, double* I2, uint8_t RDIM);
void theta2ss(double* A, double* B, double* C, double* theta, double* K, uint8_t ADIM, uint8_t NP, uint8_t NZ, uint8_t NZE, bool integral_action);
bool stability(double* A, uint8_t ADIM);
void c2d(double A[], double B[], uint8_t ADIM, uint8_t RDIM, double sampleTime);

/*
 * Miscellaneous
 */
double saturation(double input, double lower_limit, double upper_limit);
void cut(double* A, int row, int column, double* B, int start_row, int stop_row, int start_column, int stop_column);
void insert(double* A, double* B, int row_a, int column_a, int column_b, int startRow_b, int startColumn_b);
void print(double* A, int row, int column);
double sign(double number);
void filtfilt(double *y, double *t, uint16_t l, double K);

/*
 * Linear algebra
 */
int inv(double* A, int row);
void linsolve_upper_triangular(double* A, double* x, double* b, int column);
void tran(double* A, int row, int column);
void mul(double* A, double* B, double* C, int row_a, int column_a, int column_b);
void svd_jacobi_one_sided(double *A, uint16_t row, uint8_t max_iterations, double *U, double *S, double *V);
void dlyap(double* A, double* P, double* Q, int row);
uint8_t svd_golub_reinsch(double *A, uint16_t row, uint16_t column, double *U, double *singular_values, double *V);
void qr(double* A, double* Q, double* R, int row_a, int column_a);
void triu(double* A, double* b, int row);
void linsolve_lower_triangular(double *A, double *x, double *b, int row);
void tikhonov(double* A, double* b, double* ATA, double* ATb, int row_a, int column_a, double alpha);
uint8_t lup(double *A, double *LU, int *P, int row);
double det(double *A, int row);
uint8_t linsolve_lup(double *A, double *x, double *b, int row);
void chol(double *A, double *L, int row);
void pinv(double* A, int row, int column);
void hankel(double* V, double* H, uint16_t row_v, uint16_t column_v, uint16_t row_h, uint16_t column_h, uint16_t shift);
void balance(double* A, uint16_t row);
void eig(double* A, double* wr, double* wi, uint16_t row);
void eig_sym(double* A, uint16_t row, double* d);
void sum(double A[], uint32_t row, uint32_t column, uint8_t l);
double norm(double A[], uint32_t row, uint32_t column, uint8_t l);
void expm(double A[], uint32_t row);

/*
 * Optimization
 */
void linprog(double* c, double* A, double* b, double* x, int row_a, int column_a, uint8_t max_or_min, int iteration_limit);

/*
 * AI-algorithms
 */
void Astar(int *map, int *path_x, int *path_y, int x_start, int y_start, int x_stop, int y_stop, int height, int width, int norm_mode, int* steps);

/*
 * System identification
 */
void rls(uint8_t NP, uint8_t NZ, uint8_t NZE, double* theta, double u, double y, uint8_t* count, double* past_e, double* past_y, double* past_u, double* phi, double* P, double Pq, double forgetting);
void okid(double* u, double* y, double* g, uint16_t row, uint16_t column);
void era(double* u, double* y, uint16_t row, uint16_t column, double* A, double* B, double* C, uint8_t row_a, uint8_t inputs_outputs);

#endif /* CCONTROL_FUNCTIONS_H_ */
