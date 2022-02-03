/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"

void main() {
	int Size;
	Size=validar(MSG);
	int llistaNum[Size];
	for (int i=0;i<Size;i++){
		llistaNum[i]=introduccio(MSG2);
	}
	canvi(llistaNum, Size);
	mostrar(llistaNum, Size);
}
