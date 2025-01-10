#include <stdio.h>
#include <string.h>
#include "utils_consola.h"

#define MAXLINE 1000

int trim(char s[]);

int main(int argc, char *argv[]) {

    //char linea[]="Esta es una primera prueba        ";
    char linea[MAXLINE];
    int tamanyoLinea=0;
    int len=0;

    /*Pedimos linea*/
    printf("Escribe una linea\n");
    len=getline(linea,MAXLINE);

    /*Usamos trim*/
    tamanyoLinea=trim(linea);
    /*Imprimimos la línea desputiués de pasar por trim y el tamanyo*/
    printf("La linea final es --%s--\n",linea);
    printf("El tamanyo final es: %d\n",tamanyoLinea);

}

/*trim: elimina blancos. tabuladores y nueva linea al final */
int trim(char s[])
{

    int n;
    for (n = strlen(s)-1; n >= 0; n--)
        if (s[n] != ' ' && s[n] != '\t' && s[n] !='\n')
            break;
    s[n+1] = '\0';
    return n;
}
