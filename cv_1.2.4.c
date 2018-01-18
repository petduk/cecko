#include <stdio.h>

/* vypíše tabulku Celsius-Fahrenheit pro Celsius = 0, 5, 10 ..., 50 */

int main()
{

	printf("Celsius-Fahrenheit\n\n");

	float celsius, fahr;
	float dolni, horni, krok;

	dolni = 0.0;
	horni = 50.0;
	krok = 5.0; 

	celsius = dolni;
	while ( celsius <= horni) 
	{
		fahr = 9.0/5.0 * celsius + 32.0;
		printf("%3.0f %10.0f\n", celsius, fahr);
		celsius = celsius + krok;
	}

	printf("\n");

}

