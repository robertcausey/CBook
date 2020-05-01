#include <stdio.h>
/* Histogram of character frequency in a text string. Starting off with 4 characters, atgc. File is atgc_string.txt*/

int main()

{

	int c, i, j; /* c for character, i and j for array indices*/

	 /*le for array of 4 letters (atgc)*/

	i = j = 0;
	char le[] = "atgc";
	putchar(le[3]);
	putchar('\n');
	i = 0;
	while (i < 5)
		{
		putchar(le[i]);
		++i;
		}
	putchar('\n');
/*	while ((c=getchar()) != EOF)

	{
	
	}
*/
}
