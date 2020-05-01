#include <stdio.h>

	int main()
{
	int number[1000000], i, x;
	float mean, sum;
	sum = 0;
	for(i = 0; i < 999999; i++)
		{number[i] = i + 1;
		printf("i =  %d then...\n",i);
		printf("number = %d \n", number[i]);
		sum = sum + number[i];}
	mean = sum/i;
	printf("sum = %f\nMean = %f\ni = %d\n", sum, mean,i);	
}
