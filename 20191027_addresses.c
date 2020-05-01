#include <stdio.h>

int main()

{ int num;

	printf("Enter a number:\n");

	scanf("%d",&num);
	printf("is what you just entered\n\nNow check this out...\n");
	printf("%d is the number you entered\n",num);
	printf("%d is the decimal address\n",&num);
	printf("%x is the number you entered as a hexadecimal\n", num);
	printf("%x is the address as a hexadecimal\n", &num); 

	return 0;

}
