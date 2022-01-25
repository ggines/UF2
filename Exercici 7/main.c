/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"

void main() {
	int i, SIZE, max, min;
	float m;
	SIZE= sizeArray(SIZE);
	int arr[SIZE];
	//arr[SIZE]= valorsArray(SIZE, i);
	printf("Introdueix %d nombres enters: ", SIZE);
	for(i=0;i<SIZE;i++){
		scanf("%d", &arr[i]);
	}
	m= media(SIZE, arr[SIZE], i, m);
	max= valorMax(SIZE, arr[SIZE], i, max);
	min= valorMin(SIZE, arr[SIZE], i, min);
	printf("La mitjana és %f", m);
	printf("El valor màxim és %d i el valor mínim és %d", max, min);
	for(i=0;i<SIZE;i++){
		printf("%d", arr[i]);
	}
}
