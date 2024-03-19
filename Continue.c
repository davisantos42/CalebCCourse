#include <stdio.h>

int main ()
{
	int i =0;

	while (i < 11)
	{
		if (i == 7) 
		{
			printf("7 is awesome ");
			i++;
			continue;
		}
		printf("%d ", i);	

		i++;
	}

	return 0;
}
