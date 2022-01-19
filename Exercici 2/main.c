/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"

void main() {
	int segons, dies, minuts, hores, segons2;
	printf("Introdueix el total de segons: ");
	scanf("%d", &segons);
	hores=horas(hores, segons);
	minuts=minutos(minuts, segons, hores);
	segons2=segundos(hores, segons, minuts);
	dies=dias(hores, segons, dies);
	printf("El total són %d dies, %d hores, %d minuts i %d segons", dies, hores, minuts, segons2);
}
