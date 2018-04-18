// normalParallel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <cstdlib>
#include <ctime>


#define MATRIX 100
#define BUFFER MATRIX * MATRIX


int main()
{
	int A[MATRIX][MATRIX];
	int B[MATRIX][MATRIX];
	int C[MATRIX][MATRIX];

	
	srand((unsigned)time(NULL));

	for (int z = 0; z < MATRIX; z++) {
		for (int l = 0; l < MATRIX; l++) {
			A[z][l] = rand();
			B[z][l] = rand();
			C[z][l] = 0;
		}
	
	}

	for (int i = 0; i < MATRIX; i++) {
		for (int j = 0; j < MATRIX; j++) {
			for (int k = 0; k < MATRIX; k++) {
				C[i][j] += B[i][k] * A[k][j];
			}
		}
	}
	/*
	for (int z = 0; z < MATRIX; z++) {
		for (int l = 0; l < MATRIX; l++) {
			printf("%d \n",C[z][l]);
		}

	}

	*/


    return 0;
}

