#include <stdio.h>

#define NOSPACE 'a'

int main()
{
	int c, lastc;

	lastc = NOSPACE;

		while((c = getchar()) != EOF ){
			if(c != ' ')
				putchar(c);

			if(c == ' ')
				if(lastc != ' ')
					putchar(c);
			lastc=c;
		}
}
