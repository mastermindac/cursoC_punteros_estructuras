#define MAXWORD 100
#define BUFSIZE 100

/*getword: recoge una palabra del usuario*/
int getword(char *word, int lim);
int getch(void);
void ungetch(int c);