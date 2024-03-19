#include <stdio.h>

int main ()
{
	int a = 10;
	int *p;
	p = &a;

	// Pointer arithmetic

	printf("%p\n",  p);
	printf("Size of integer is %d bytes\n", sizeof(int));
	printf("The value at address P is %d\n", *p);
	printf("%p\n", p + 1);
	printf("The value at address P+1 is %p\n", *(p + 1));
	
	return 0;
}
