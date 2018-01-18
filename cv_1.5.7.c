#include <stdio.h>

/* zkopíruje vsput na výstup; 1. verze */

int main()
{
	int z;
    z = getchar();
    while (z != EOF)    {
	printf("[%f]\n", EOF);
	putchar(z);
        z = getchar();
    }
}
	
