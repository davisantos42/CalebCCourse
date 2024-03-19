#include <stdio.h>

int main () 
{
	printf("The number of eggs for the day: ");
	
	int eggs;
	scanf("%i", &eggs);
	
	double dozens = (double) eggs / 12; 

	printf("You have a total of %f dozens\n", dozens);

	return 0;
}
