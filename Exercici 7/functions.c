/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
int sizeArray(int SIZE){
	printf("Introdueix el tamany de l'array (entre 1 i 50): ");
	scanf("%d", &SIZE);
	while(SIZE>50 || SIZE<1){
		printf("Torna a introduïr un tamany correcte (entre 1 i 50): ");
		scanf("%d", &SIZE);
	}
	return SIZE;
}

int media(int SIZE, int arr[SIZE], int i, float m){
	int suma=0;
	for(i=0;i<SIZE;i++){
		suma+=arr[i];
	}
	m= suma / SIZE;
	return m;
}

int valorMax(int SIZE, int arr[SIZE], int i, int max){
	max= arr[0];
	for(i=1;i<SIZE;i++){
		if(arr[i]>max){
			max= arr[i];
		}
	}
	return max;
}

int valorMin(int SIZE, int arr[SIZE], int i, int min){
	min= arr[0];
	for(i=1;i<SIZE;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}
