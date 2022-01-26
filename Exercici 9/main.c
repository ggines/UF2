/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"


void main() {
	int num, numDecimal;
	num= validate();
	numDecimal= binario(num);
	printf("El resultat en decimal és: %d", numDecimal);
}

