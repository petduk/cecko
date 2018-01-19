#include <stdio.h>

/* spočítá řádky na vstupu */

int main()

{
    int z, pr;

    pr = 0;
    while ((z= getchar()) != EOF)
        if (z == '\n' )
            ++pr;
    printf("%d\n",pr);
}
