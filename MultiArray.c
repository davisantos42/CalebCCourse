#include <stdio.h>

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);

	}
}


int main ()
{
	int myGrades[] = {12, 23, 11 };
		
	 int grades[3][3] = {
		{12, 23, 11},
		{55, 34, 66},
		{98, 34, 67}

	};

	for (int i = 0; i < 3; i++)
	{
		printArray(grades[i], 3);
		printf("\n");
	}
	
	return 0;
}
