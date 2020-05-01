#include <stdio.h>
#define number_of_rows 5
#define number_of_columns 15


/* a soap calculation*/ 

int main()

{
	char recip[number_of_rows][number_of_columns] = 
	{"Water", "Lye", "Coconut Oil", "Olive Oil", "Total"};

	float so[6] = {12.16, 6.73, 12.80, 19.20, 50.89};
	int i, j;	

	printf("Robert's liquid soap formula\n----------------------------\n");
	for (i = 0; i < 5; ++i)

		printf("%-15s  %11.2f\n", recip[i], so[i]*8/6.73);
	printf("\n\n");	
	for (i = 0; i < 5; ++i)
		printf("%-15s\n", recip[i]);
		
	printf("\n");

	for (i = 0; i < 5; ++i)
	{			
		for (j = 0; j < 15; ++j)
		printf("%-4c i = %d j= %d\n",recip[i][j], i, j); 
	}
}
