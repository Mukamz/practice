#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (0) success
 */

int main(void)
{
	int  a = 10;
	int *p;
	int **q;
	p = &a;
	q = &p;


	printf("Value of a is %d  %d  %d\n", *p, a, **q);
	printf("Address of p is %p\n", &p);
	printf("Address of a is %p  %p\n", p, &a);
	return (0);
}
