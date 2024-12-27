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
	FILE *fp,*fp2;
    if(argc==1){
        printf("Uso de cat.exe\n");
        printf("cat.exe ruta_fichero : Imprime fichero por pantalla\n");
        printf("cat.exe ruta_fichero1 ruta_fichero2: Copia fichero1 en fichero2\n");
    }else{
        if(argc>=2)
            //Abrimos el primer fichero en modo lectura
            if((fp=fopen(argv[1],"r"))==NULL){
                printf("cat: no puede abrir el fichero %s",argv[1]);
                return 1;
            }else{
                //Comprobamos si solo imprimimos por pantalla
                if(argc==2){
                    filecopy(fp,stdout);
                    fclose(fp);
                }
                //Comprobamos si copiamos
                if(argc==3){
                    //Debemos abrir el segundo fichero
                    if((fp2=fopen(argv[2],"w"))==NULL){
                        printf("cat: no puede abrir el fichero %s",argv[2]);
                        return 1;
                    }else{
                        filecopy(fp,fp2);
                        fclose(fp2);
                        fclose(fp);
                    }
                }
            }
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