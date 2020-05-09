#include <stdio.h>


/*Exercise to practice entering, storing data, and printing output using command line. This introduces the scanf function and how inputted data is assigned to memory. A simple calculation (c = a + b) is performed to generate output. The \n character creates a new line, otherwise output is printed as run-on text on the command line itself. It can be toughh to spot sometimes. */

	int main()
	{
		int a, b, c; /*commas between*/
		printf("Enter a number, then hit return\n");
		scanf("%d", &a);/*%d imports a and b as an integers and & assigns a and b to memory*/
printf("Now enter another number, and then hit return again\n");
		scanf("%d", &b);
		c =  a + b; 
		printf("You entered %d and %d\n", a, b);
		printf("%d + %d = %d\n",a,b,c);
		return 0;
		
	}


	 
