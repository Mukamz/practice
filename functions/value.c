#include <stdio.h>

void fun(int x, int y);
void main()
{
	int x = 5, y = 7;
	fun(x, y);
	printf("X is %d  Y is %d\n", x, y);
}

void fun(int x, int y)
{
	x = 7;
	y = 5;
	
	printf("X is %d  Y is %d\n", x, y);
}
