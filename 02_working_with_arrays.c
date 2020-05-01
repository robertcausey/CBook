#include <stdio.h>

	int main()
{
	int a[10], b[10], c[10], d[10],number[10],i;
	float mean, sum;
	sum = 0;
	for(i = 0; i < 10; i++)
		{a[i] = i + 1;
		 b[i] = i + 2;
	 	c[i] = a[i] + b[i]; 
		d[i] = 2*a[i];
		sum = sum + a[i];
		mean = sum/i;
		printf("i = %2d a = %2d b = %2d c = %2d d = %2d sum = %4.0f mean = %4.2f\n",i, a[i], b[i], c[i], d[i], sum, mean);
		}
}
