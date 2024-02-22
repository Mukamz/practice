#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (0) success
 */

int main(void)
{
	int  a = 10, b = 9;

	int *p, *q;

	p = &a;
	q = &b;

	printf("Value of a is: %d\n", a);
	printf("Value of a is: %d\n", *p);
	return (0);
}
