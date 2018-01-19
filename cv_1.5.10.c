#include <stdio.h>

/* spočítá řádky na vstupu */

int main()

{
    int z, pr;

    pr = 0;
    while ((z= getchar()) != EOF)
        if (z == '\t'|| z == '\b'|| z == '\\' )
            ++pr;
    printf("\\\n",pr);
}
