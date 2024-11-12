#include <stdio.h>
#include "utils_memoria.h"

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

/*Funcion que permite gestionar la reserva de memoria*/
char *alloc(int n)
{
    //allocbuf : dirección que apunta al inicio de la memoria total
    //ALLOCSIZE: constante
    //allocbuf+ALLOCSIZE: Total de memoria reservada
    //allocbuf+ALLOCSIZE - allocp: Espacio que queda libre (int)
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        //Movemos el puntero de primera posición libre
        allocp += n;
        //Devolvemos la direccion de la posición reservada
        return allocp - n;
    } else {
        return NULL;
    }
}

/*Funcion que permite liberar memoria*/
void afree(char *p)
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}