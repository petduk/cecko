#include <stdio.h>
#define MAXRADEK 1000 /* maximální velikost řádku na vstupu */

int nactiradek(char radek[], int maxradek);
void kopiruj(char kam[], char od[]);

/* vytiskne nejdelší řádek textu na vstupu */

int main()

{
    int delka;              /* aktuální délka řádku */
    int max;                /* největší prozatím dosažená délka */
    char radek[MAXRADEK];   /* aktuální řádek na vstupu */
    char nejdelsi[MAXRADEK];/* nejdelší řádek se ukládá zde */
    
    max=0;
    while ((delka=nactiradek(radek, MAXRADEK)) > 0)
        if (delka > max) 
        {
            max=delka;
            kopiruj(nejdelsi, radek);
        }
        if (max>0)  /* pokud byl na vstupu alepon jeden řádek */
            printf("%s", nejdelsi);
        return 0;
}

/* nactiradek: načte řádek do r. vrátí jeho délku */

int nactiradek(char r[], int lim)

{
    int z,i;
    
    for(i=0; i < lim-1 && (z=getchar())!=EOF && z!='\n'; ++i)
        r[i] = z;
    if (z == '\n') 
    {    r[i] = z;
        ++i;
    }
    r[i] = '\0';
    return i;
}

/* kopiruj: zkopíruj 'od'do 'do'; předpokladej, že je dostatečně velké */ 

void kopiruj(char kam[], char od[])

{
    int i; 
    
    i=0;
    while ((kam[i] = od[i]) != '\0')
        ++i;
}
