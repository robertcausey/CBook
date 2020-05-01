#include <stdio.h>

	int main()

{
	printf("How I get lucky\nCelsius\tFahrenheit\n");
	
	float fahr;
	int lower, upper, step;
	float celsius;	
	lower = 0;
	upper = 150;
	step = 1;

	celsius = lower;
	while (celsius <= upper) {
		fahr = 32 + (9*celsius/5);
		printf("%6.2f\t %3.0f\n", fahr, celsius);
		celsius = celsius + step;
	}
}
