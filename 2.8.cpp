//Niaya scott
//June 21
//2.8

#include <stdio.h>
main()

{
	int number = 0;
	int maxValue = 10;
	printf("Pick a number between 1 and 10.");
	scanf("%d", &number);
	printf ("\nPrinting values from %d to %d.", number, maxValue);
	
	do
	  {printf ("\n%d", number++);
	  } while (number <= maxValue);
}
