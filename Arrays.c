#include <stdio.h>

int main ()
{
	int size = 5;
	int myGrades[size];

	myGrades[0] = 2;
	myGrades[1] = 24;
	myGrades[2] = 58;
	myGrades[3] = 78;
	myGrades[4] = 555;
	
	for (int i =0; i < size; i++ )
	{
	printf("%d ", myGrades[i]);	
	}
	return 0;
}
