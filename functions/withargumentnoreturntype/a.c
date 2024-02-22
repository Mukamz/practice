#include <stdio.h>

void fun(int, int);
void main()
{
	int x, y;
	printf("Enter x & y\n");
	scanf("%d %d", &x, &y);
	fun(x, y);
}
void fun(int a, int b)
{
	int s = 0;
	s = a + b;
	printf("Sum is %d\n", s);
}
