/*qsort: ordenacion de forma alfabetica*/
void qsort(char *lineptr[],int left,int right);
/*qsortGen: ordenacion de forma generica*/
void qsortGen(char *lineptr[],int left,int right,int (*comp)(void *,void *));
/*strcmp: regresar <0 si s<t, 0 si s==t, >0 si s>t*/
int mystrcmp(char *s, char *t);
/*numcmp: compara dos cadenas de texto convertidas de número a texto con atof*/
int numcmp(char *s1, char *s2);
/*swap: intercambia dos punteros*/
void swap(char *v[],int i,int j);
double atof(char s[]);