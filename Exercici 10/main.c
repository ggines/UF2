/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"


void main() {
	int size;
	size = validate();
	struct biblioteca gestio[size];
	modifyData(&gestio, size);
	printData(gestio, size);
}
