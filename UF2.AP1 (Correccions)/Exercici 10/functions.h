/*
 * functions.h
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

struct fecha{
	int year;
	int mes;
	int dia;
};

struct biblioteca{
	char titulo[30];
	char autor[50];
	char editorial[50];
	struct fecha fecha;
	int unidades;
	char usuario[30];
	int dias_prestamo;
};
int validate();
void registrobib(struct biblioteca *, int);
void printabla(struct biblioteca *, int);

#endif /* FUNCTIONS_H_ */


