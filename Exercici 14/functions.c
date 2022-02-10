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

int validate(){
	int size;
	printf("%s", MSG1);
	scanf("%d", &size);
	return size;
}

void fillArray(int *arr, int size){
	int i;
	for(i=0;i<size;i++){
		arr[i]= 15 + rand() % (200 +1 - 15);
	}
}

void findArray(int *arr, int size){
	int i, valor, trobat=0;
	printf("%s", MSG3);
	scanf("%d", &valor);
	for(i=0;i<size;i++){
		if(arr[i]==valor){
			trobat=1;
		}
	}

	if(trobat==1){
		printf("El nombre %d s'ha trobat", valor);
	}else{
		printf("El nombre %d no s'ha trobat", valor);
	}
	printf("%s", MSG2);
		for(i=0;i<size;i++){
			printf("[%d] ", arr[i]);
		}
}
