/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
int validate(){
	int num, numCount, count=0;
	printf("Introdueix el nombre en format binari amb menys de 8 dígits: ");
	scanf("%d", &num);
	numCount= num;
	//Para contar los dígitos
	 do{
	    numCount /= 10;
	    ++count;
	  }while (numCount != 0);

	 //while(count>7){
		 //printf("Error. Torna a introduïr un nombre amb menys de 8 dígits: ");
		//scanf("%d", &num);
		 //numCount= num;
		 //do{
		 	 //numCount /= 10;
		 	 //++count;
		 //}while (numCount != 0);
	 //}
	return num;
}

int binario(num){
	int numDecimal=0, base=1, x;
	while (num>0){
		x= num % 10;
		numDecimal= numDecimal + x * base;
		num= num/10;
		base= base * 2;
	}
	num=numDecimal;
	return num;
}
