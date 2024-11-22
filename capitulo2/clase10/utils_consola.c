#include <stdio.h>
#include "utils_consola.h"
#include "utils_memoria.h"

/*readlines: lee lineas de entrada*/
int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];
	nlines = 0;

    //Bucle de recogida de línea a línea del usuario
	while ((len = getline(line, MAXLEN)) > 0){
        //Comprobación de espacio
        if(nlines>=maxlines||(p=alloc(len))==NULL)
            return -1;
        else{
            line[len-1]='\0';
            strcpyPunteros(p,line);
            lineptr[nlines++]=p;
        }
    }

	return nlines;
}

/*escribe las lineas a partir de una array de punteros*/
void writelines(char *lineptr[], int nlines){
    int i;

    for(i=0;i<nlines;i++)
        printf("%s\n",lineptr[i]);
}

/*getline: lee una linea, la almacena en line y devuelve su longitud*/
int getline(char line[], int lim){
    int c,i;

    /*Bloque que almacena los caracteres del usuario */
    for(i=0;i<lim-1&&(c=getchar())!=EOF && c!='\n';++i)
        line[i]=c;

    if(c=='\n'){
        line[i]=c;
        ++i;
    }

    line[i]='\0';
    return i;

}

//Funcion strcpy con punteros
void strcpyPunteros(char *s, char *t)
{
    while ((*s=*t)!='\0'){
        s=s+1;
        t=t+1;
    }
}
