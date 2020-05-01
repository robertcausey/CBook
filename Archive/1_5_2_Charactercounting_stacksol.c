#include <stdio.h>
#define     EOL '\n'
/* https://stackoverflow.com/questions/3646255/problem-with-example-1-5-2-in-kr-book-on-c */
int main()
{
    long nc;
    int c;
    nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == EOL)
        {
            /* Print number of input characters (not including return character) */
            printf("%ld\n", nc-1); 
            nc = 0;
        }
    }
}
