#define MAXLEN 10000

int getline(char line[], int maxline); /*Función que captura una línea del usuario y la almacena en el array*/
int readlines(char *lineptr[], int maxlines); /*Función que almacena líneas en el array de punteros*/

void strcpyPunteros(char *s, char *t); //Funcion strcpy con punteros