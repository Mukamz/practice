#include <stdio.h>

void sum(void);
void main(void)
{
	sum();
}
void sum(void)
{
	int a = 5, b = 7, sum = 0;
	sum = a + b;
	printf("sum = %d", sum);
}
