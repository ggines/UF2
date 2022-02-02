/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"


void main() {
	int size,i;
	size= validate();
	int arr[size];
	fillArray(arr, size);
	printArray(arr, size);
}
