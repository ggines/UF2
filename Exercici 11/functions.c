/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"


void fillArray(int *arr){
	int i, j=2;
	for(i=0;i<50;i++){
		arr[i]= j;
		j= j+2;
	}
}

void printArray(int *arr){
	int i;
	for(i=0;i<50;++i){
		printf("[%d] ", arr[i]);
	}
}
