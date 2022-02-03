/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"

int validate(){
    int num;
    do{
   	 printf("Quants llibres vols registrar?\n");
   	 scanf("%d", &num);
    }while(num<1);
    return num;
}

void registrobib(struct biblioteca *b,int size){ //punter a office
    for(int i=0; i<size;i++){
   	 printf("Introduce titulo del libro: \n");
   	 scanf("%s",b[i].titulo);
   	 printf("Introduce nombre del autor: \n");
   	 scanf("%s",b[i].autor);
   	 printf("Introduce nombre de la editorial: \n");
   	 scanf("%s",b[i].editorial);
   	 printf("Introduce el año de poblicación: \n");
   	 scanf("%d",&b[i].fecha.year);
   	 printf("Introduce el mes de poblicación: \n");
   	 scanf("%d",&b[i].fecha.mes);
   	 printf("Introduce el dia de poblicación: \n");
   	 scanf("%d",&b[i].fecha.dia);
   	 printf("Introduce unidades disponibles: \n");
   	 scanf("%d",&b[i].unidades);
   	 printf("Introduce nombre de usuario: \n");
   	 scanf("%s",b[i].usuario);
   	 printf("Introduce cantidad de dias de prestamo: \n");
   	 scanf("%d",&b[i].dias_prestamo);

    }
}

void printabla(struct biblioteca *b, int size){
    printf("------------------------------------------------\n");
    printf("Estos son los registros:\n");
    printf("Libro\t     Autor\t     Editorial\t     Fecha\t     Unidades\t     Usuario\t     Dias prestados\n");
    //Correcció: També he posat aquests separadors per millorar la taula
    printf("-----\t     -----\t     ---------\t     -----\t     --------\t     -------\t     --------------\n");
    for(int i=0; i<size; i++){
    	//Correcció: He millorat el printf per a que mostri de forma més ordenada
    	//les dades. He posat un número en els % per controlar l'espai de cada dada
    	printf("%s\t %9s\t %7s\t %7d/%d/%d\t %5d\t %15s\t %5d\t\n", b[i].titulo, b[i].autor, b[i].editorial, b[i].fecha.year, b[i].fecha.mes, b[i].fecha.dia, b[i].unidades, b[i].usuario, b[i].dias_prestamo );

    }
}
