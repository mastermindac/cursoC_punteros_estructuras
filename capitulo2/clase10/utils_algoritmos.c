#include <stdio.h>
#include "utils_algoritmos.h"

/*qsort: ordenacion de forma alfabetica*/
void qsort(char *lineptr[],int left,int right){
	int i, last;

	if (left >= right)
		return;
	swap(lineptr, left, (left + right) / 2);
	last = left;
	for (i = left+1; i <= right; i++)
		if (mystrcmp(lineptr[i],lineptr[left]) < 0)
			swap(lineptr, ++last, i);
	swap(lineptr, left, last);
	qsort(lineptr, left, last-1);
	qsort(lineptr, last+1, right);
}

/*strcmp: regresar <0 si s<t, 0 si s==t, >0 si s>t*/
int mystrcmp(char *s, char *t){

    for(;*s==*t;s++,t++)
        if(*s=='\0')
            return 0;
    
    return *s-*t;
}

/*swap: intercambia dos punteros*/
void swap(char *v[],int i,int j){
    char *temp;

    temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}