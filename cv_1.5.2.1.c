#include <stdio.h>

/* spočítá znaky na vstup */

int main()

{
    long pz;

    pz = 0;
    while(getchar() != EOF)
        ++pz;
    printf("\n");
    printf("%d\n", pz);
}
