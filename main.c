/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"

void main() {
	int valor;
	valor= validate();
	if(valor<=5000 && valor>=10){
		printf("Has introduït el valor %d", valor);
	}
}
