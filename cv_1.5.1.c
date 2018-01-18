#include <stdio.h>

/* zkopíruje vsput na výstup; 1. verze */

int main()
{
	int z;
    z = getchar();
    while (z != EOF)    {
        putchar(z);
        z = getchar();
    }
}
	
