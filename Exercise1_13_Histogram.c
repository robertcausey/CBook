#include <stdio.h>

#define IN 1
#define OUT 0

/* trying to make a histogram of word size in sentence "The quick brown fox jumped over a lazy cat on the couch*/ 

int main()

{
	int c, i, l, l1, l2, l3, l4, l5, l6;
	
	c = i = l = l1 = l2 = l3 = l4 = l5 = l6 = 0;

	while ((c=getchar()) != EOF)
		{
		if (c != ' ')
				++l;
		else 
			{
				printf("%d\n",l);
		if (l == 1)
				++l1;
		if (l == 2) 
				++l2;
		if (l == 3)
				++l3;
		if (l == 4) 
				++l4;
		if (l == 5)
				++l5;
		if (l == 6)
				++l6;

				l = 0;
			}
		}
	printf("%d %d %d %d %d %d\n\n\nIn Graphical Form\n\n", l1, l2, l3, l4, l5, l6);
		if (l1 >5)
			printf("F |X");
		else
			printf("F | ");
		if (l2 >5)
			printf("X");
		else
			printf(" ");
		if (l3 >5)
			printf("X");
		else
			printf(" ");
		if (l4 >5)
			printf("X");
		else
			printf(" ");
		if (l5 >5)
			printf("X");
		else
			printf(" ");
		if (l6 >5)
			printf("X\n");
		else
			printf(" \n");
		if (l1 >4)
			printf("R |X");
		else
			printf("R | ");
		if (l2 >4)
			printf("X");
		else
			printf(" ");
		if (l3 >4)
			printf("X");
		else
			printf(" ");
		if (l4 >4)
			printf("X");
		else
			printf(" ");
		if (l5 >4)
			printf("X");
		else
			printf(" ");
		if (l6 >4)
			printf("X\n");
		else
			printf(" \n");	
		if (l1 >3)
			printf("E |X");
		else
			printf("E | ");
		if (l2 >3)
			printf("X");
		else
			printf(" ");
		if (l3 >3)
			printf("X");
		else
			printf(" ");
		if (l4 >3)
			printf("X");
		else
			printf(" ");
		if (l5 >3)
			printf("X");
		else
			printf(" ");
		if (l6 >3)
			printf("X\n");
		else
			printf(" \n");
		if (l1 >2)
			printf("Q |X");
		else
			printf("Q | ");
		if (l2 >2)
			printf("X");
		else
			printf(" ");
		if (l3 >2)
			printf("X");
		else
			printf(" ");
		if (l4 >2)
			printf("X");
		else
			printf(" ");
		if (l5 >2)
			printf("X");
		else
			printf(" ");
		if (l6 >2)
			printf("X\n");
		else
			printf(" \n");
		if (l1 >1)
			printf("  |X");
		else
			printf("  | ");
		if (l2 >1)
			printf("X");
		else
			printf(" ");
		if (l3 >1)
			printf("X");
		else
			printf(" ");
		if (l4 >1)
			printf("X");
		else
			printf(" ");
		if (l5 >1)
			printf("X");
		else
			printf(" ");
		if (l6 >1)
			printf("X\n");
		else
			printf(" \n");
		if (l1 == 1)
			printf("  |X");
		else
			printf("  | ");
		if (l2 == 1)
			printf("X");
		else
			printf(" ");
		if (l3 == 1)
			printf("X");
		else
			printf(" ");
		if (l4 == 1)
			printf("X");
		else
			printf(" ");
		if (l5 == 1)
			printf("X");
		else
			printf(" ");
		if (l6 == 1)
			printf("X\n");
		else
			printf(" \n");
		printf("---------\n   123456\n   Letters\n");
}
