#include <stdio.h>

	/* program gives value of 0 for any character entered. change == to != and it will report 1 for any value entered */
	int main()
	
	{
		int c;
		c = ((getchar())==EOF);
		printf("%2d\n", c); 
		
	}
