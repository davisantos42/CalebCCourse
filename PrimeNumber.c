#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int input)
{
	int primeNumberCount = 0;

	for (int i = sqrt(input); i >= 2; i--)
	{
		if (input % i == 0)
		{
			return false;
		}	
		
	}
	return true;
}


int main ()
{
	int input;
	scanf("%d", &input);

	for(int i = input; i > 1; i--)
	{
		bool prime = isPrime(i);
		
		if (prime)
		{
			printf("%d is prime\n", i);
	
		} 

	} 

	
	return 0;
}
