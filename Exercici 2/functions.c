/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
int horas(int hores, int segons){
	hores= segons /3600;
	return hores;
}

int minutos(int minuts,int segons, int hores){
	hores= segons /3600;
	minuts= ((segons-hores*3600)/60);
	return minuts;
}

int segundos(int hores, int segons, int minuts){
	hores= segons /3600;
	minuts= ((segons-hores*3600)/60);
	segons= segons-(hores*3600+minuts*60);
	return segons;
}

int dias(int hores, int segons, int dies){
	hores= segons /3600;
	dies= hores /24;
	return dies;
}
