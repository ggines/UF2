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
	int opcion1, opcion2, opcion3, opcion4;
	opcion1=validate();
	opcion2=validate2();
	opcion3=validate3();
	opcion4=validate4();
	operacions(opcion1, opcion2, opcion3, opcion4);
}
