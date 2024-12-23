/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    cuenta palabras

    arreglos para el conteo de palabras reservadas
    herramientas: estructuras, arreglos
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "utils_consola.h"
//Tamaño del total de palabras dentro de la estructura
#define NKEYS (sizeof keytab/sizeof keytab[0])

/* Estructura que define el diccionario */
struct key {
	char *word;
	int count;
} keytab[] = {
	{ "auto", 0 }, { "break", 0 }, { "case", 0 }, { "char", 0 },
	{ "const", 0 }, { "continue", 0 }, { "default", 0 }, { "double", 0 }, { "else", 0 },
	{ "enum", 0 }, { "extern", 0 }, { "float", 0 }, { "for", 0 },
	{ "goto", 0 }, { "if", 0 }, { "int", 0 }, { "long", 0 },
	{ "register", 0 }, { "return", 0 }, { "short", 0 }, { "signed", 0 },
	{ "sizeof", 0 }, { "static", 0 }, { "struct", 0 }, { "switch", 0 },
	{ "typedef", 0 }, { "union", 0 }, { "unsigned", 0 }, { "void", 0 },
	{ "volatile", 0 }, { "while", 0 }
};
/*binsearch: encuentra x en v[]*/
int binsearch(char *word,struct key v[],int n);


int main(){
    int n; //Contador
    char word[MAXWORD]; //Palabras introducidas por el usuario

    //Comienza el bucle de introducción de palabras
    while(getword(word,MAXWORD)!=EOF)
        //Comprobamos que es alfanumérico
        if(isalpha(word[0]))
            //Buscamos la palabra
            if((n=binsearch(word,keytab,NKEYS))>=0)
                //Si se encuentra
                keytab[n].count++;
    //Imprimimos el array mostrando el conteo final
	for (n = 0; n < NKEYS; n++)
		if (keytab[n].count > 0)
			printf("%4d %s\n",
				keytab[n].count, keytab[n].word);

	return 0;
    
}

/*binsearch: encuentra x en v[]*/
int binsearch(char *word,struct key v[],int n){
    int cond;
    int low,high,mid;

    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if((cond=strcmp(word,v[mid].word))<0)
            high=mid-1;
        else if(cond>0)
            low=mid+1;
        else
            return mid;
    }
    return -1;
}