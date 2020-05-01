#include <stdio.h>
#define MAX 100
/*How to enter a text string without using gets. The problem with gets appears to be that it does not specify the maximum length of the string. This makes it possible for a malicious person to insert text within the array.*/ 
int main()
{
	char c[MAX];
	printf ("Write something of 100 characters or less:\n");
	fgets(c, MAX, stdin);
	printf("You wrote: %s\n", c);
	return 0;
}
