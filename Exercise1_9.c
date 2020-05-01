#include <stdio.h>

#define NONBLANK 'a'

/* terribly frustrating at first system of converting multiple spaces into one space*/

	int main()
	
	{
		int c, lastc;

		lastc = NONBLANK;
		while ((c = getchar()) != EOF) {
			if (c != ' ')
				putchar(c);
			if ( c == ' ')
				if (lastc != ' ')
					putchar(c);
				lastc = c;
		}
	}	

