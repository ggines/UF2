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
		printf("Introdueix els valors (entre 0 i 10): ");
		scanf("%d", &arr[i]);
		while(arr[i]>10 || arr[i]<0){
			printf("Torna a introduïr un valor vàlid: ");
			scanf("%d", &arr[i]);
		}
	}
}

void printArray(int *arr, int size){
	int i, j, x;

	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				x= arr[i];
				arr[i] = arr[j];
				arr[j]= x;
			}
		}
	}

	for(i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}

void mitjanaArray(int *arr, int size){
	int i, suma=0;
	float m;
	for(i=0;i<size;i++){
		suma+=arr[i];
	}
	m= suma / size;
	printf("\nLa mitjana és %.2f", m);
}

void maxArray(int *arr, int size){
	int i, max=arr[0];
	for(i=1;i<size;i++){
		if(arr[i]>max){
			max= arr[i];
		}
	}
	printf("\nEl valor màxim és %d", max);
}

void minArray(int *arr, int size){
	int i, min=arr[0];
	for(i=1;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("\nEl valor mínim és %d", min);
}
