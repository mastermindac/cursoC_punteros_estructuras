#include <stdio.h>
#include "utils_memoria.h"
#include "utils_consola.h"
#include "utils_algoritmos.h"

#define MAXLINES 100
char *lineptr[MAXLINES];

int main(int argc, char *argv[]){
    int nlines;
    if((nlines=readlines(lineptr,MAXLINES))>=0){
        qsort(lineptr,0,nlines-1);
        /*Escribir las frases por pantalla*/
        writelines(lineptr,nlines);
        return 0;
    }else{
        printf("Error: entrada demasiado grande para ser ordenado\n");
        return 1;
    }
}