#include <stdio.h>

	int main()

{
	printf("How I get lucky\n");

	float fahr;
	int lower, upper, step;
	float celsius;	
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
