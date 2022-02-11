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
	struct receptes rec[size];
	size= validate();
	fillStruct(&rec, size);
	printStruct (rec, size);
}
