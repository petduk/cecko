#include <stdio.h>

/* spočítá řádky na vstupu */

int main()

{
    int z, pr;

    pr = 0;
    while ((z= getchar()) != EOF)
        
            ++pr;
    printf("\n");
    printf(" \n",pr);
}
