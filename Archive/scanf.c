#include <stdio.h>
/*working on input. Major problem is that text entry requires no spaces between words using scanf. This was solved by switching to fgets. However it also became apparent that scanf need to be followed immediately by printf. If you put fgets between them (i.e. do all the input first) things fgets does not work. So, in the program scanning the numbers is followed by printing the numbers. Then getting the text is followed by printing the text. But in running the program, all the entry (integers, decimal fractions, text) occurs at the same time. */
int main()
{	int x;
	float num;
	char text[100];
	printf("Enter an integer, a float, and a text string (100 characters max), each entry separated from the next by a space\n");
	scanf("%d %f", &x, &num);
	printf("\nThe integer: %d\nThe float: %2.2f\n", x, num);
	fgets(text,  100, stdin); 
	printf("The string: %s\n", text);
}
