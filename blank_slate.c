/*#include <stdio.h>

	int main()
	{
		int c,d,e;
		c = 2;
		d = 3;
		e = c+d;
		printf("Hello World\n");
		printf("All is good \n");
		printf("%d plus %d equals %d\n", c,d,e);
	}
*/

/*First partially successful attempt to enter a string and have it print out. Problem is that it won't print after a space.*/
/*#include <stdio.h>

int main () {
   char c[100];
   
   printf("Enter character: ");
   scanf("%s", c);
   printf("Character entered: %s", c);
   printf("\nCharacter spat back at you: %s", c);
   printf(" in a tea cup\n");

}
*/
//C progam to illustrate fgets. Problems with "?" punctuation
#include <stdio.h>
#define MAX 100
int main()
{
	char buf[MAX];
	printf("I ask you to write something intelligent, and you wrote: ");
	fgets(buf, MAX, stdin);
	printf("Wait, perhaps I misread it, but did you just write:'%s'?\nWell, they are your words but are they really intelligent?", buf);
	printf("\n");

}
