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
	int size;
	size= validate();
	int arr[size];
	srand (time(NULL));
	fillArray(arr, size);
	findArray(arr, size);
}

