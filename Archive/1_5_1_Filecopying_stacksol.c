#include <stdio.h>
#define     EOL '\n'
	int main()
	
	{
		int c;
		while ((c = getchar()) != EOF)
		{
			putchar(c);
		if (c == EOL)
		break;
			} 
	}
