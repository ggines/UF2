/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"

void main() {

	int size, i;
	size = validar(MSG, 1, 50);
	float num[size];
	omplir(num, size);
	printf("\nLa mitjana dels valors és: %.2f\n"
			"El valor més gran és %.0f i el "
			"més petit és %.0f.\n", mitjana(num, size), max(num, size),
			min(num, size));

	order(num, size);

	printf("Els valors ordenats són: [");
	for (i = 0; i < size; i++) {
		if (i != size-1) {
			printf("%.0f,", num[i]);
		} else {
			printf("%.0f", num[i]);
		}
	}
	printf("]");
}
