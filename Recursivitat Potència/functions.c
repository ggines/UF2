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

int validate1(){
	long num;
	printf("%s", MSG);
	scanf("%d", &num);
	return num;
}


int potencia1(long num){
	if(num==1 || num==0){
		return 1;
	}else{
		return num * potencia1(num-1);
	}
}
