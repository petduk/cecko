#include <stdio.h>

/* spočitej číslice, bílé znaky a ostatní znaky */

int main()
{
    int z, i, pbilych, postatnich; 
    int pcislic[10];
    
    pbilych = postatnich = 0;
    for (i = 0; i < 10; ++i)
        pcislic[i] = 0;
        
    while ((z= getchar()) !=EOF)
        if (z >= '0' && z <= '9')
            ++pcislic[z- '0'];
        else if (z == ' ' || z == '\n' || z == '\t')
            ++pbilych;
        else 
            ++postatnich; 
      
    printf("cisla = ");
    for (i = 0; i < 10; ++i)
        printf(" %d", pcislic[i]);
    printf(", bile znaky = %d, ostatní = %d\n", pbilych, postatnich); 
}
