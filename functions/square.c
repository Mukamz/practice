#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *square -called function that return the square of its parameters
 *@y: character for an integer
 */
int square(int y);
int main(void)
{
	for (int x = 1; x <= 10; ++x)
	{
		printf("%d\t", square(x));
	}
	puts("");
}
int square(int y)
{
	return (y * y);
}
