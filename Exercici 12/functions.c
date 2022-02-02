/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"

int validate(){
	int size;
	printf("Introdueix el tamany de l'array (entre 1 i 50): ");
	scanf("%d", &size);
	while(size>50 || size<1){
		printf("Torna a introduïr un tamany vàlid: ");
		scanf("%d", &size);
	}
	return size;
}

void fillArray(int *arr, int size){
	int i;
	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
}

void printArray(int *arr, int size){
	int i, j, x;

	for(i=0;i<size;++i){
		for(j=i+1;j<size;++j){
			if(arr[i]<arr[j]){
				x= arr[i];
				arr[i] = arr[j];
				arr[j]= x;
			}
		}
	}

	for(i=0;i<size;++i){
		printf("[%d] ", arr[i]);
	}
}
