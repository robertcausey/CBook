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
	while (i < 10 )
		{
		putchar(le[i]);/*print string up to 26 letters*/
		putchar(' ');/*prints space between each letter*/
                putchar(' ');
		++i;
		}
	for (i=10; i<26;++i)
		{
		 putchar(le[i]);
		 printf("   ");
	 	}
	putchar('\n');
	i = 0;
	while  (i < 10)
		{
		printf("%-3d", i);/*print value of i*/
		++i;
		}
		 
	for (i=10; i<26;++i)
		printf("%-3d ",i);
	putchar('\n');
/*	while ((c=getchar()) != EOF)

	{
	
	}
*/
}
