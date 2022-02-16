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
	long num, factorial;
	num= validate1();
	factorial= potencia1(num);
	printf("%ld", factorial);
}
