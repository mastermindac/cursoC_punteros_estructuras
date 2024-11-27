/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    puntero a funciones

    uso de los punteros a funciones suma o resta
*/

#include <stdio.h>
#include <string.h>

/*Prtototipos de la suma y resta */
int suma(int a, int b);
int resta(int a, int b);

int main(int argc, char *argv[]){
    int (* ptrOperacion)(int, int);
    int sumaOp=1;

    /*Comprobacion del argumento*/
    if(argc>1 && strcmp(argv[1],"-suma")==0) sumaOp=0;

    if (sumaOp==0){
        ptrOperacion=suma;
    }else{
        ptrOperacion=resta;
    }

    /*Usamos el puntero a la funcion elegida */
    printf("El resultado de la operacion es %d",ptrOperacion(5,6));

}

/*Ejecutamos suma o resta*/

int suma(int a, int b){ return a+b;}
int resta(int a, int b){ return a-b;}