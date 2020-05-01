#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*Exercise to put a tab symbol "\t" where there are tabs and "\b" where there are back spaces*/

	int main()
	{
		int a, b, c, d, e; /*commas between*/
		printf("Enter a number, then hit return\n");
		scanf("%d", &a);
printf("Now enter another number, and then ht return again\n");
		scanf("%d", &d);
		time_t t;
		b =  0;
		c =  a - d; 
		e = c + b;
		printf("You entered %d and %d\n", a, d);
		printf("%d + %d = %d\n",a,b,c);
		printf("%d = %d + %d\n",e,c,d);
		printf("%d\n", c);
		return 0;
		
	}


	 
