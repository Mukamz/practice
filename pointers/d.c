#include <stdio.h>

int main(void)
{
	int b;
	int *c;

	b = 10;
	c = &b;


	printf("Value of b is: %d\n", b);
	printf("Address of b is: %p\n", &b);
	printf("Value of c is: %p\n", c);
	printf("Value of b is: %d\n", *c);

	return(0);
}
