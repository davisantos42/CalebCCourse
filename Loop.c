#include <stdio.h>

int main ()
{
	//initialization
	//comparison
	//update

	int min;
	scanf("%d", &min);
		
	for (int i = min; i != 0; i-=2)
	{
		printf("%i\n", i);
	}
	
	printf("You printed %d numbers\n", min);

	return 0;
}
