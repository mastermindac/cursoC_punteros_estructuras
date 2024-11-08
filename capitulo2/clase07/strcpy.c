/*
CURSO C LIBRO KERNIGHAN & RITCHIE
uso de los punteros con los arreglos
copia y comparación de dos arreglos de caracteres
herramientas: funciones, for, array
*/
#include <stdio.h>
#define MAXLINE 1000 /*tamaño máximo de la línea*/

void strcpyIndices(char *s, char *t);
void strcpyPunteros(char *s, char *t);

int main(){
    char origen[]="Paco tiene un coche azul\0";
    char copia[MAXLINE]="";

    printf("Linea vacia: %s\n",copia);
    //strcpyIndices(copia, origen);
    strcpyPunteros(copia, origen);
    printf("Linea copiada: %s\n",copia);

    return 0;
}

//Funcion strcpy con indices de array
void strcpyIndices(char *s, char *t)
{
    int i;
    i=0;

    while ((s[i]=t[i])!='\0'){
        i++;
    }
}

//Funcion strcpy con punteros
void strcpyPunteros(char *s, char *t)
{
    while ((*s=*t)!='\0'){
        s=s+1;
        t=t+1;
    }
}