#include <stdio.h>

int main ()
{
	int slices;
	printf("How many slices of pizza did you eat? ");
	scanf("%d", &slices);
	
	int caloriesPerSlice = 250;
	
	switch(slices)
	{
		case 1: 
		case 2:
		case 3:
			printf("You did a good job!\n");
			break;
		case 4:
			printf("You are a dissapointment!\n");
			break;
		default:
			printf("Enjoy your heart dissease\n");
			break;
	}

	printf("You had %d calories\n", caloriesPerSlice * slices);

	return 0;
}
