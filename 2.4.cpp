//Niaya Scott
//June 21
//2.4

#include <stdio.h>
main()
{
	int number, square;
	
	printf("What number do you want to square?");
	scanf("%d",&number);
	
	if (number <= 100)
	{ square = number * number;
		printf("The square of %d is %d.", number, square);
	}
	if (number > 100)
	{
		printf("You entered a number greater than 100.\nTry again.");
	}
}
