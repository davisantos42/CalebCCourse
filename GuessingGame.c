// The user has to guess a number from 0 - 5
// Output whether or not the user is correct

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	//Pseudo random number generator 
	//This gets seeded
	//Outputs a result
	// Seed - from the clock
	
	int maxValue = 5;
	int guess;
	srand(time(NULL));
	int randomNumber = rand() % (maxValue + 1);

	printf("%d\n",randomNumber);
	
	// You can use the modulus operator to get a number in a certain range.
	// That is achieved by taking the modulus of 1 above the range you want to get.
	// To get a range of 0 - 5, you take the modulus of 6 from a random number

	printf("Guess a number 0 - %d: ", maxValue);
	scanf("%d", &guess);
	
	if (guess == randomNumber)
	{
		printf("Your guess is correct!\n");
	
	} else 
	{
		printf("You lost! please, try again.\n");
	}
	
	return 0;
}
