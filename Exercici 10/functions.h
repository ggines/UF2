/*
 * functions.h
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#endif /* FUNCTIONS_H_ */

struct fecha{
	int dia;
	int mes;
	int any;
};

struct biblioteca{
	char nom[20];
	char autor[20];
	char editorial[20];
	struct fecha addr;
	int unitats;
	char usuari[20];
	int temps;
};

int validate();
void modifyData(struct biblioteca *, int);
void printData(struct biblioteca *, int);
