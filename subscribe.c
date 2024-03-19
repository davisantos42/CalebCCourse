#include <stdio.h>

int main()
{
	int radius; // Distance from the center of a circle to its limit
	printf("Please, enter a radius now: ");	
	scanf("%i", &radius); // Address-of operator

	double area = 3.14159 * radius * radius; 
	printf("The area of a circle with %i radius is %f\n",radius, area);

	return 0;
}
