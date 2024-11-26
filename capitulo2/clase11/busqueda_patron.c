/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    busqueda de patron por comando

    uso de arreglo de punteros recogidos desde linea de comandos
    herramientas: punteros, arreglos, funciones, main
*/

#include <stdio.h>
#include <string.h>
#include "utils_consola.h"

#define MAXLINE 1000

/*find: imprime las lineas que coincidan con el patron del 1er argumento*/
int main(int argc, char *argv[]){
    char line[MAXLINE];
    int found=0;

    if(argc!=2)
        printf("Uso: busqueda_patron.exe patron\n");  
    else
        while(getline(line,MAXLINE)>0)
            /* Comparación del patron */
            if(strstr(line,argv[1])!=NULL){
                /*printf("%s",line);*/
                found++;
            }
    printf("El numero de coicidencias: %d",found);
    return found;

}