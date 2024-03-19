//doctors office
// 1. add a patient
// 2. view a patient
// 3. search patients
// 4. exit

#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("Choose a menu option from 1-4:\n");
	printf("1. Add a patient\n");
	printf("2. View a patient\n");
	printf("3. Search patients\n");
	printf("4. Exit\n");

	int input;
	scanf("%d", &input);

	if (input == 1)
	{
		printf("Your patient was added\n");

	} else if (input == 2)
	{
		printf("You viewed a patient\n");

	} else if (input == 3)
	{
		printf("You searched some patients\n");
	} else if (input == 4)
	{
		printf("You just exited\n");
		printf("Would you like to save your progress? (Y / N)\n");
		
		getchar();
		
		char q;
		scanf("%c", &q);	
		
		
		if (q == 'y' || q == 'Y') 
		{
			printf("Saving changes\n");	
		
		} else if (q == 'n' || q == 'N')
		{
			printf("Fine whatever\n");
		
		} else {
		printf("You have entered an invalid input, try again\n");		

		}
		
		return 0;
	} else 
	{
		printf("That is not a valid input, please try again\n");
	}
	
	return 0;
}
