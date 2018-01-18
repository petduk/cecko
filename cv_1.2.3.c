#include <stdio.h>

/* vypíše tabulku Fahrenheit-Celsius pro fahr = 0, 20, ..., 300 */

int main()
{

	printf("Fahrenheit-Celsius\n\n");

	float fahr, celsius;
	int dolni, horni, krok;

	dolni = 0;
	horni = 300;
	krok = 20; 

	fahr = dolni;
	while ( fahr <= horni) 
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %10.1f\n", fahr, celsius);
		fahr = fahr + krok;
	}

	printf("\n");

}

