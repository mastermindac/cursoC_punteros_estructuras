/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    estructuras de punteros y rectangulos

    creación y uso de estructuras
    herramientas: estructuras, funciones
*/
#include <stdio.h>

/*Estructura punto*/
struct point{
    int x;
    int y;
};

/*Estructura rect*/
struct rect{
    struct point pt1;
    struct point pt2;
};

/*Creacion de un nuevo punto */
struct point makepoint(int x,int y){
    struct point temp;

    temp.x=x;
    temp.y=y;

    return temp;
}

/*Imprimir un rectangulo*/
void printRect(struct rect r){
    printf("Rectangulo con pt1:[%d,%d] y pt2:[%d,%d]\n",r.pt1.x,r.pt1.y,r.pt2.x,r.pt2.y);
}

int main(){
    struct point p;
    struct rect r;

    //Asignacion manual
    p.x=0;
    p.y=0;

    //Asignación unsando makepoint
    r.pt1=makepoint(0,0);
    r.pt2=makepoint(5,10);

    printRect(r);

}