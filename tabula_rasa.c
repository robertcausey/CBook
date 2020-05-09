#include <stdio.h>


/* blank slate for practicing C code : strange syntax for printing single character... need array?This has something to do with characters as being integers and somehow converted back to characters before printing*/

int main()

{
	char c[] = "abc";
	putchar(c[c-c]);
	putchar(c[0]);
	putchar(c['c'-'b']);/* c-b does not work. Requires single quotes 'c' - 'b'*/
	putchar('z');
	putchar(c['&'-'$']);/*see ASCII table for values of the symbols*/	
	putchar('\n');
}
