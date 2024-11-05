#include <stdio.h>
#include "utils_consola.h"

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