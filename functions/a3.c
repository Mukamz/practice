#include <stdio.h>
void fun(int*, int*);
void main()
{
	int x = 5, y = 7;

	fun(&x, &y);
	printf("x is %d y is %d\n", x, y);
}
void fun(int *x, int *y)
{
	*x = 7;
	*y = 5;
	printf("x is %d y = %d\n", *x, *y);
}
