/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: ubuntu
 */
#include <stdio.h>
#include "functions.h"

void main() {
    int size;
    size = validate();
    struct biblioteca bib[size];
    registrobib(bib, size);//per referència només l’array, no size
    printabla(bib, size); //es passa per valor
}
