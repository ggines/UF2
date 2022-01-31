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
	printf("Quants llibres vols introduïr? ");
	scanf("%d", &size);
	return size;
}

void modifyData(struct biblioteca *p, int size){
	for(int i=0;i<size;i++){
		printf("Introdueix el títol del llibre: ");
		scanf("%s", p[i].nom);
		printf("Introdueix l'autor del llibre: ");
		scanf("%s", p[i].autor);
		printf("Introdueix l'editorial del llibre: ");
		scanf("%s", p[i].editorial);
		printf("Introdueix el dia de publicació: ");
		scanf("%d", &p[i].addr.dia);
		printf("Introdueix el mes de publicació: ");
		scanf("%d", &p[i].addr.mes);
		printf("Introdueix l'any de publicació: ");
		scanf("%d", &p[i].addr.any);
		printf("Introdueix les unitats disponibles: ");
		scanf("%d", &p[i].unitats);
		printf("Introdueix l'usuari que ha agafat el préstec: ");
		scanf("%s", p[i].usuari);
		printf("Introdueix el temps del préstec (en dies): ");
		scanf("%d", &p[i].temps);
	}
}

void printData(struct biblioteca *p, int size){
	for(int i=0;i<size;i++){
		printf("\n---------Taula %d---------\n", i+1);
		printf("Títol del llibre: %s\n", p[i].nom);
		printf("Autor del llibre: %s\n", p[i].autor);
		printf("Editorial del llibre: %s\n", p[i].editorial);
		printf("Data de publicació: %d-%d-%d\n", p[i].addr.dia, p[i].addr.mes, p[i].addr.any);
		printf("Unitats disponibles: %d\n", p[i].unitats);
		printf("Usuari que ha agafat el préstec: %s\n", p[i].usuari);
		printf("Temps del préstec: %d\n", p[i].temps);
	}
}
