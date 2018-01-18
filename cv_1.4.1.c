#include <stdio.h>

#define DOLNI 0     /* dolní mez tabulku */
#define HORNI 300   /* dolní mez tabulku */
#define KROK 20     /* dolní mez tabulku */

/* vypíše tabulku Fahrenheit-Celsius */

int main()
{
    int fahr;
    for (fahr = DOLNI; fahr <= HORNI; fahr = fahr + KROK)
        printf("%3d %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
}
