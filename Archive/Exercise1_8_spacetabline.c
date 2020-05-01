#include <stdio.h>
/*count spaces in input K&R p 20 EX 1-8*/

int main()
{
	int c, ns, nt, nl;

	ns = nt = nl = 0;
	while (( c= getchar()) !=EOF){
		if (c == ' ')
			++ns;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;}
	printf("Spaces: %4d\nTabs: %6d\nLines: %5d\n", ns, nt, nl);
}
