#include <stdio.h>
/*count spaces in input K&R p 20 EX 1-8*/

int main()
{
	int c, nt;

	nt = 0;

	while (( c= getchar()) !=EOF)
		if (c == '\t')
			++nt;
	printf("%d\n", nt);
}
