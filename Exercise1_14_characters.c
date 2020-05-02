#include <stdio.h>
/* Histogram of character frequency in a text string. Starting off with 4 characters, atgc. File is atgc_string.txt*/

int main()

{

	int c, i, j; /* c for character, i and j for array indices*/

	 /*le for array of 4 letters (atgc)*/

	i = j = 0;
	char le[] = "abcdefghijklmnopqrstuvwxyz";/*a string*/
	putchar(le[3]);/*print "i'th" letter of string*/
	putchar('\n');/*line break*/
	i = 0;
	while (i < 26 )
		{
		putchar(le[i]);/*print string up to 26 letters*/
		putchar(' ');/*prints space between each letter*/
		++i;
		}
	putchar('\n');
	i = 0;
	while  (i < 26)
		{
		printf("%d", i);/*print value of i*/
		++i;
		putchar(' ');/* print space between*/
		}
	putchar('\n');
/*	while ((c=getchar()) != EOF)

	{
	
	}
*/
}
