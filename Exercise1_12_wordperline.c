#include <stdio.h>

int c;

int main()

{

	while( (c = getchar()) != EOF)
	{
		if(c != '\t')
			if(c != '\b')
				if(c != '\\')
					if(c != '\n')
						if(c != ' ')
							putchar(c);
		
		else {printf("\n");}

	/*putchar('\n');*/
	}
		printf("\n");
}
