#include <stdio.h> 

int main ()
{	
	printf("Please, enter a character: ");
	char ASCII;

	scanf("%c", &ASCII);

	printf("%i\n", ASCII);

	int integer;
	printf("Please enter an integer between 0 - 127\n");
	scanf("%d", &integer);
	printf("%c", integer);
	
	//Math with ASCII
	char mathz = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n", mathz, mathz);
		
	return 0;
}
