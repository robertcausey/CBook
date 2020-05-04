// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include <stdio.h>
float i, j, k; /*declare floats separated by comma*/
float l;
int main()
{
	i=20;
	j=3;
	k =  i + j; /*defaults to 23.0000, not 23, because it's a float*/
	l =  i/j;  /*can only get a float quotient if both integers are declared as floats. Possibly not both, just one. Need to check*/
	printf("Hello World!\n%6.0f     + %6.0f = %6.0f\n Quotient =  %f\n %p %p %p %p", i, j, k, l, &i, &j, &k, &l); /* %p ....&i prints the address for i. %6.0f means minimum of 6 spaces assigned, but 0 after decimal point (because they are integers).*/
	return 0;
}

