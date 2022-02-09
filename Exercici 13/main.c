/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

void main() {
	int size, rangMin, rangMax;
	size= validateSize();
	int arr[size];
	srand (time(NULL));
	rangMin= validateMin();
	rangMax= validateMax();
	fillArray(arr, size, rangMin, rangMax);
	validateMenu(arr, size);
}
