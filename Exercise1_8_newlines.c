#include <stdio.h>
/*count spaces in input K&R p 20 EX 1-8*/

int main()
{
	int c, nl;

	nl = 0;

	while (( c= getchar()) !=EOF)
		if (c == '\n')
			++nl;
	printf("Lines: %d\n", nl);
}
