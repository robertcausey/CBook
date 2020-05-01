#include <stdio.h>
/*count spaces in input K&R p 20 EX 1-8*/

int main()
{
	int c, ns;

	ns = 0;

	while (( c= getchar()) !=EOF)
		if (c == ' ')
			++ns;
	printf("%d\n", ns);
}
