//Niaya Scott
//Jun 21
//2.6

#include <stdio.h>
main()
{
	char answer;
	
	printf("Do you want continue (Y/N)?");
	scanf("%c",&answer);
	
	while ((answer != 'Y') && (answer != 'N'))
		{printf("\nYou must type a Y or an N\n");
		printf("Do you want to continue (Y/N) ?");
		scanf("%c",&answer);}
}
