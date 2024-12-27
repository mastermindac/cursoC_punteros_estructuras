/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    lectura de un fichero

    lectura de ficheros y escritura en el terminal
    herramientas: punteros y i/o de ficheros
*/
#include <stdio.h>

void filecopy(FILE *, FILE *);

int main(int argc, char *argv[])
{
	FILE *fp;

    if((fp=fopen("receta.txt","r"))==NULL){
        printf("cat: no puede abrir el fichero receta.txt");
        return 1;
    }else{
        //Aquí copiaremos el fichero leído a la consola
        filecopy(fp,stdout);
        fclose(fp);
    }
	
	return 0;
}

/*filecopy: copia de un puntero a otro*/
void filecopy(FILE *ifp, FILE *ofp)
{
	int c;

	while ((c = getc(ifp)) != EOF)
		putc(c, ofp);
}