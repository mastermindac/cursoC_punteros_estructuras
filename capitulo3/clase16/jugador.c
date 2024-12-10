#include <stdio.h>
#include <string.h>

//Definición de la estructura jugador
struct jugador{
    char nombre[64];
    float altura;
    int dorsal;
    int puntos_totales;
};

int main(){
    //Definición de las variables de tipo struct
    struct jugador paco;
    struct jugador marcos;
    
    //Equipo
    struct jugador equipo[12];

    //Usando las estructuras
    paco.altura = 1.75f;
    paco.dorsal = 23;
    paco.puntos_totales = 24;
    strcpy(paco.nombre,"Paco");
}