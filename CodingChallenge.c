#include <stdio.h>
#include <math.h>

int main ()
{
	double x, y;
	printf("Please provide the value of the first number: ");
	scanf("%lf", &x);
	printf("Please provide the value of the second number: ");
	scanf("%lf", &y);
	
	double hipotenuse = sqrt(x*x + y*y);
	
	printf("The value of your hipotenuse using %f and %f is %f\n", x, y, hipotenuse);
	
	return 0;
}
