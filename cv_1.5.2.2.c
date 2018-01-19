#include <stdio.h>

/* spočítá znaky na vstup */

int main()
{ 
    double pz;

    for (pz = 0; getchar() != EOF; ++pz)
        ;
    printf("\n");
    printf("%.0f\n", pz);
}
