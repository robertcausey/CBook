#include <stdio.h>
#include <time.h>

/* how to show time*/

int main()
{
	time_t timer;
	char buffer[26];
	struct tm* tm_info;
	int c,d,e;
	time(&timer);
	tm_info = localtime(&timer);

	strftime(buffer, 26, "%Y-%m-%d %H:%M:%S", tm_info);
	puts(buffer);
/*From here we get two opportunities for keyboard in put. The idea is to enter the seconds as 2 digits, e.g. 59 would be "5" then "9". The program then uses the inputs to generate a story through a series of if statements. Through subsequent arithmetic manipulations (e.g. c +d = e), we can create more variables and more statements. AS 0F (JUNE 21 2019) TODAY WE ONLY HAVE TWO OPTIONS SET UP (c==1 and d == 1), SO ONLY ENTER 1 AND  1. */ 
	printf("Push return then enter the seconds as 2 digits separated by return");
	scanf("%d %d", &c,&d);
	if(c==1)
	printf("A hot chick knocks on your door ");
	if(d==1)
	printf("and begs you to let her in. ");	
	e = c+d;
	if(e==2)
	printf("You do so. She laughs and runs to the bedroom, and bends over the bed, looking at you.\n");
	return 0;  
}
