#include <stdio.h>

#define NONBLANK 'a'

/* blank slate for practicing C code : here we replace double blanks*/

int main()

{
	int c, lastc;

	lastc = NONBLANK;

	while ((c = getchar()) != EOF)

	{
		if (c!=' ')
			putchar(c);
		if (c == ' ')
			if (lastc != ' ')
				putchar(c);
			lastc = c;
	}  
}
