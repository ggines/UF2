/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

int validateSize(){
	int size;
	printf("%s", MSG_SIZE);
	scanf("%d", &size);
	return size;
}

int validateMin(){
	int num;
	printf("%s", MSG_MIN);
	scanf("%d", &num);
	return num;
}

int validateMax(){
	int num;
	printf("%s", MSG_MAX);
	scanf("%d", &num);
	return num;
}

void fillArray(int *arr, int size, int rangMin, int rangMax){
	int i;
	for(i=0;i<size;i++){
		arr[i]= rangMin + rand()%(rangMax+1-rangMin);
	}
}

void printArray(int *arr, int size, int rangMin, int rangMax){
	int i;
	for(i=0;i<size;i++){
		printf("[%d] ", arr[i]);
	}
}

void validateMenu(int *arr, int size){
	int opcion, i, j, canvi, valor, trobat=0;
	printf("%s\n", MSG);
	scanf("%d", &opcion);
	switch (opcion){
		case 1:
			for(i=0;i<size;i++){
				for(j=i+1;j<size;j++){
					if(arr[i]>arr[j]){
						canvi= arr[i];
						arr[i]= arr[j];
						arr[j]= canvi;
					}
				}
			}
			printf("%s", MSG5);
			for(i=0;i<size;i++){
				printf("[%d] ", arr[i]);
			}
			break;
		case 2:
			for(i=0;i<size;i++){
				for(j=i+1;j<size;j++){
					if(arr[i]<arr[j]){
						canvi= arr[i];
						arr[i]= arr[j];
						arr[j]= canvi;
					}
				}
			}
			printf("%s", MSG6);
			for(i=0;i<size;i++){
				printf("[%d] ", arr[i]);
			}
			break;
		case 3:
			printf("%s", MSG7);
			scanf("%d", &valor);
			for(i=0;i<size;i++){
				if(arr[i]==valor){
					trobat=1;
				}
			}

			for(i=0;i<size;i++){
				printf("[%d] ", arr[i]);
			}

			if(trobat==1){
				printf("\nEl nombre %d sí s'ha trobat", valor);
			}else{
				printf("\nEl nombre %d no s'ha trobat", valor);
			}
			break;
		default:
			printf("Error");
	}
}
