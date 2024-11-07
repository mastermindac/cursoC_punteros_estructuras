#include <stdio.h>

/*Funcion que intercambia el valor de las variables a y b*/
void swap(int a,int b);
/*Funcion que intercambia el valor de las variables a y b usando punteros*/
void swap_punteros(int *px,int *py);

int main(int argc, char *argv[]) {
    //Valores de prueba
    int num1=1;
    int num10=10;

    /*Imprimimos valores antes del intercambio*/
    printf(" ---- SWAP POR VALOR ---\n");
    printf(" [num1=%d] - [num10=%d]\n", num1,num10);
    swap(num1,num10);
    /*Imprimimos valores después del intercambio*/
    printf(" [num1=%d] - [num10=%d]\n", num1,num10);

    
    printf(" ---- SWAP POR REFERENCIA ---\n");
    printf(" [num1=%d] - [num10=%d]\n", num1,num10);
    swap_punteros(&num1,&num10);
    /*Imprimimos valores después del intercambio*/
    printf(" [num1=%d] - [num10=%d]\n", num1,num10);
    return 0;
}

/*Funcion Swap versión PASO POR VALOR*/
void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

/*Funcion Swap versión PASO POR REFERENCIA*/
void swap_punteros(int *px, int *py){
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
}


