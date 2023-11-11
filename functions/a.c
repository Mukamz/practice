#include <stdio.h>

/**
 *jumble - called function
 *main - print final values of x and y after jumble function
 *@x : character arg
 *@y : character arg
 *Return: value of x at function jumble
 *return: Always 0 (success) and value of x
 */

int jumble(int x, int y)
{
	x = 2 * x + y;

	return (x);
}
int main(void)
{
	int x = 2, y = 5;

	y = jumble(y, x);
	x = jumble(y, x);
	printf("x = %d  y = %d", x, y);
	return (0);
}
