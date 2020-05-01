#include <stdio.h>

int main()
{
		int q, i;
		char c[] = "abcdefghijklmnopqrstuvwxyz";
		i = 0;	
		printf("Alphabet printed with putchar\n");
		putchar('\t');
		for (i = 0; i < 26; ++i)
		{putchar(c[i]);
		}
		putchar('\n');
		printf("Alphabet printed with printf\n\t%s\n", c);
		printf("Yes I am brilliant...\nThank you\n");
}
