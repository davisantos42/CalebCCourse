#include <stdio.h>

int main ()
{	
	printf("How many dogs do you have? \n");
	
	double dogs; 
	scanf("%lf", &dogs);

	printf("%f\n%e\n%g\n", dogs, dogs, dogs);

	/* Conversion characters
	-------------------------
	
	%f - Decimal notation
	%e - Scientific notation
	%g - Computer decides 
	
	*/
	
	return 0;
}
