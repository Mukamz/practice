#include <stdio.h>

/**
 * sum - function to get the sum of 2 integers
 */

void sum()
{
	int a, b, sum = 0;

	printf("Enter two numbers\n");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum: %d\n", sum);
}
/**
 * main - Entry point
 * Return: Always (0) success
 */
void main()
{
	sum();
	printf("Hello\n");
	sum();
	sum();
}
