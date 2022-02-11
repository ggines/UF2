/*
 * functions.h
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#define MSG "Quantes receptes vols introduïr? "
#define MSG2 "Introdueix el títol del plat: \n"
#define MSG3 "Introdueix la categoria:\n1-Aperitius\n2-Primer plat \n3-Segon plat \n4-Postres\n"
#define MSG4 "Introdueix el nombre de racions: \n"
#define MSG5 "Introdueix el temps d'elaboració: \n"
#define MSG6 "Introdueix el nivell de dificultat:\n1-Baix\n2-Mig\n3-Alt\n"
#define MSG7 "\nCategoría: Aperitius\n"
#define MSG8 "\nCategoría: Primer plat\n"
#define MSG9 "\nCategoría: Segon plat\n"
#define MSG10 "\nCategoría: Postres\n"
#define MSG11 "\nDificultat: Baix\n"
#define MSG12 "\nDificultat: Mig\n"
#define MSG13 "\nDificultat: Alt\n"
struct receptes{
	char titol[30];
	int categoria;
	int racions;
	int temps;
	int dificultat;
};

#endif /* FUNCTIONS_H_ */
int validate();
void fillStruct(struct receptes *, int);
void printStruct(struct receptes *, int);
