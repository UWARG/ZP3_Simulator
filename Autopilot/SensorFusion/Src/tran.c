/*
 * tran.c
 *
 *  Created on: 1 mars 2020
 *      Author: Daniel Mårtensson
 */

#include "CControlFunctions.h"

/*
 * Turn A into transponse A^T
 */
void tran(double* A, int row, int column) {

	double* B = (double*)malloc(row*column*sizeof(double));
	double* transpose;
	double* ptr_A = A;

	for (int i = 0; i < row; i++) {
		transpose = &B[i];
		for (int j = 0; j < column; j++) {
			*transpose = *ptr_A;
			ptr_A++;
			transpose += row;
		}
	}

	// Copy!
	memcpy(A, B, row*column*sizeof(double));
}

/*
 * GNU Octave code:
 * >> A = [4 23 5; 2 45 5]
	A =

		4   23    5
		2   45    5

	>> A'
	ans =

		4    2
	   23   45
		5    5

	>>
 */
