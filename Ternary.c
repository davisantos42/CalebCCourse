#include <stdio.h>

int main ()
{
	double money = 28;
	double cost = 25;

	money > cost ? printf("You can afford it\n") : printf("Sorry bro...You need %lf more moneyz\n", cost - money);

	/*
	if (money > cost) 
	{
		printf("You can afford it\n");
	} else {
		printf("Sorry bro...You need %lf more moneyz\n", cost - money);
	}
	*/

	return 0;
}
