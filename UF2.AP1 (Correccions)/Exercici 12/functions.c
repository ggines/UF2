/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"


int introduccio(char *msg){
	int num;
	do{
		printf(msg);
		scanf("%d", &num);
	}while (num<1);
	return num;
}

int validar(char *msg2){
	int num;
	//Correcció: He canviat el do while per un while.
	//Si es posa un valor fora de rang t'avisa de que ho has d'introduir
	//altre vegada
	printf(msg2);
	scanf("%d", &num);
	while(num<1 || num>50){
		printf("Torna a introduir un valor entre 1 i 50: ");
		scanf("%d", &num);
	}
	return num;
}

void canvi(int *llistaNum, int Size){
	for (int i=0;i<Size-1;i++){
		for (int j=i+1;j<Size;j++){
			if (llistaNum[i]<llistaNum[j]){
				int canvi=llistaNum[i];
				llistaNum[i]=llistaNum[j];
				llistaNum[j]=canvi;
			}
		}
	}
}

void mostrar(int *llistaNum, int Size){
	//Correcció: He tret el [ del primer printf
	printf("L'array ordenat és: ");
	for (int i=0;i<Size;i++){
		if(i!=Size-1){
			//En els 2 printf del if ho he posat amb [] i un espai,
			//per a que quedi millor visualment.
			printf("[%d] ", llistaNum[i]);
		}else{
		printf("[%d] ", llistaNum[i]);
		}
	}
	//He tret aquest printf amb el ]
}
