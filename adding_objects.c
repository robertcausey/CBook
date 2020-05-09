#include <stdio.h>

/* count digits, white space, others */ 

int main()

{
	int i;
	int a[10];
	int b[10];
	int c[10];

	a[i] = 0;
	b[i] = 2*a;
	c[i] = a+b;

	for (i = 0; i < 10; ++i)
		printf("%d  %d  %d  %d\n", i, a[i], b[i], c[i]);

}
