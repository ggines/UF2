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
	printf("%s", MSG);
	scanf("%d", &size);
	return size;
}

void fillStruct(struct receptes *p, int size){
	int i;
	for(i=0;i<size;i++){
		printf("%s", MSG2);
		scanf("%s", p[i].titol);
		printf("%s", MSG3);
		scanf("%d", &p[i].categoria);
		printf("%s", MSG4);
		scanf("%d", &p[i].racions);
		printf("%s", MSG5);
		scanf("%d", &p[i].temps);
		printf("%s", MSG6);
		scanf("%d", &p[i].dificultat);
	}
}

void printStruct(struct receptes *p, int size){
	int i;
	for(i=0;i<size;i++){
		printf("\n-----------Recepta %d-----------\n", i+1);
		printf("Títol del plat: %s", p[i].titol);
		if(p[i].categoria==1){
			printf("%s", MSG7);
		}if(p[i].categoria==2){
			printf("%s", MSG8);
		}if(p[i].categoria==3){
			printf("%s", MSG9);
		}if(p[i].categoria==4){
			printf("%s", MSG10);
		}
		printf("Nombre de racions: %d", p[i].racions);
		printf("\nTemps d'elaboració: %d", p[i].temps);
		if(p[i].dificultat==1){
			printf("%s", MSG11);
		}if(p[i].dificultat==2){
			printf("%s", MSG12);
		}if(p[i].dificultat==3){
			printf("%s", MSG13);
		}
	}
}
