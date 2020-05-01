#include <stdio.h>

#define IN 1
#define OUT 0

/* trying to make a histogram of word size in sentence "The quick brown fox jumped over a lazy cat on a a a a a couch" */ 

int main()

{
	int c, i, l, j, k;
	int la[8], w[18];
	
	l = i = j = 0;
	printf("First Print Command\n");
	while ((c=getchar()) != EOF)
		{
		if (c != ' ')
				++l;
		else 
			{
				++i;
				printf("%d\n",l);
				w[i] = l;/*the length of each word*/ 
				l = 0;
			}
		}
	printf("Second print command\n");
	for (i = 1; i < 17; ++i)

		printf("w[i] = %d i = %d\n", w[i],i);

	printf("Third print Command\n");
	for (i = 1; i < 17; ++i)
		{
		for (j = 0; j < 8; ++j)
			{ if (w[i] == j)
				++la[j];
			printf("w[i] = %d i = %d la[j] = %d j = %d\n",w[i], i, la[j], j);
			
			}
		
		}
	printf("Fourth Print Command\n");
		
		if (la[1] > 4)
			printf("F |X");
		else
			printf("F | ");
	for (j=2; j<7; ++j)
		{
		if (la[j] > 4)
			printf("X");
		else 
			printf(" ");
		}		
	printf("\n");
		if (la[1] > 3)
			printf("R |X");
		else
			printf("R | ");
	for (j=2; j<7; ++j)
		{
		if (la[j] > 3)
			printf("X");
		else 
			printf(" ");
		}		
	printf("\n");
		if (la[1] > 2)
			printf("E |X");
		else
			printf("E | ");
	for (j=2; j<7; ++j)
		{
		if (la[j] > 2)
			printf("X");
		else 
			printf(" ");
		}		
	printf("\n");
		if (la[1] > 1)
			printf("Q |X");
		else
			printf("Q | ");
	for (j=2; j<7; ++j)
		{
		if (la[j] > 1)
			printf("X");
		else 
			printf(" ");
		}		
	printf("\n");
		if (la[1] > 0)
			printf("  |X");
		else
			printf("  | ");
	for (j=2; j<7; ++j)
		{
		if (la[j] > 0)
			printf("X");
		else 
			printf(" ");
		}		
	printf("\n");

	printf("---------\n   123456\n   Letters\n");
}
