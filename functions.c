/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
int validate(){
	int num, x=0;
	printf("Introdueix un valor entre 10 i 5000: ");
	scanf("%d", &num);
	while((num>5000 || num<10) && x<3){
			printf("No has introduït un valor vàlid, torna a introduïr: ");
			scanf("%d", &num);
			x=x+1;
		}
	return num;
}
