/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    ordenación de lineas con diferentes métodos de ordenacion

    uso de punteros a funciones
    herramientas: punteros, arreglos, funciones, main
*/

#include <stdio.h>
#include <string.h>
#include "utils_memoria.h"
#include "utils_consola.h"
#include "utils_algoritmos.h"

#define MAXLINES 5000
char *lineptr[MAXLINES];

int main(int argc, char *argv[])
{
	int nlines;
	int numeric = 0; //Semáforo ordenación numérica o alfabetica

    //Comprobación del parámetro -n
	if(argc>1 && strcmp(argv[1],"-n")==0)
		numeric=1;
    //Captura de las líneas de entrada
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        //Ordenación dependiente de la variable numeric
        qsortGen(lineptr,0,nlines-1,(int (*)(void *, void *))(numeric?numcmp:mystrcmp));
        /*
		if(numeric)
			qsort(lineptr,0,nlines-1,(int (*)(void *, void *))numcmp);
		else
			qsort(lineptr,0,nlines-1,(int (*)(void *, void *))strcmp);
        */
		writelines(lineptr, nlines);
		return 0;
	} else {
		printf("Entrada demasiado grande para ser ordenada\n");
		return 1;
	}
}