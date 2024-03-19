#include <stdio.h>

int main ()
{
	int slices = 17;
	int people = 2;	

	//Two ways to fix this:
	// 1) Add .0  to a constant.
	// 2) Explicit type casting


	double halfThePizza = (double) (slices / people);
	printf("%f\n", halfThePizza);
		
	double c = 25/2 * 2;
	double d = 25/2 * 2.0;

	printf("C: %f\n", c);
	printf("D: %f\n", d);

	return 0;
}
