#include <stdio.h>

int main ()
{
	int number = 2323232;

	int i = 0;

	while (1)
	{

		printf("%d\n", i);
		
		//do something indefinitely
		
		if (i == number)
		{
			printf("We found it!\n");
			break;
		}
	i++;
	}	
	
	return 0;
}
