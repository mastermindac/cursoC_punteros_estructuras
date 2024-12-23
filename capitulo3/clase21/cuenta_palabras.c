/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    cuenta palabras arbol binario

    estructuras en nodo para el almacenamiento y el conteo de las palabras
    herramientas: estructuras, arreglos, punteros
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "utils_tree.h"

#define MAXWORD 100

int main(){

    Treenode *root;
	char word[MAXWORD];

    
    root=NULL;
    while(getword(word,MAXWORD)!=EOF)
        if(isalpha(word[0]))
            root=addtree(root,word);
    treeprint(root);
    return 0;
}