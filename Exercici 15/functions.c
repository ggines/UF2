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
	int option;
	printf("%s", MSG);
	scanf("%d", &option);
	return option;
}

int validate2(){
	int option;
	printf("%s", MSG2);
	scanf("%d", &option);
	return option;
}

int validate3(){
	int option;
	printf("%s", MSG3);
	scanf("%d", &option);
	return option;
}

int validate4(){
	int option;
	printf("%s", MSG4);
	scanf("%d", &option);
	return option;
}

void operacions(int *opcion1, int *opcion2, int *opcion3, int *opcion4){
	int revolucions=0, tempsRentat=0;
	if(opcion1==1){
		if(opcion2==1){
			if(opcion3==1){
				revolucions=400;
			}else{
				revolucions=600;
			}
		}else{
			if(opcion4==1){
				revolucions=1200;
			}else{
				revolucions=1000;
			}
		}
		if(revolucions<600){
			tempsRentat=45;
		}else{
			if(revolucions<1000){
				tempsRentat=60;
			}else{
				tempsRentat=90;
			}
		}
		printf("\nEl temps del rentat és %d i les revolucions són %d", tempsRentat, revolucions);
	}else{
		printf("%s", MSG5);
	}
}
