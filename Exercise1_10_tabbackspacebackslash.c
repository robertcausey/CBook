#include <stdio.h>

int c;

int main()

{

	while( (c = getchar()) != EOF)
	{
		if(c == '\t')
			printf("\\t");
		if(c == '\b')
			printf("\\b");
		if(c == '\\')
			printf("\\\\");
		if(c == '\n')
			printf("\\n");
		if(c != '\t')
			if(c != '\b')
				if(c != '\\')
					if(c != '\n')
						putchar(c);
	}
	putchar('\n');
}
