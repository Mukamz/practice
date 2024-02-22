#include <stdio.h>

int sum(int, int);
int main()
{
	int c, x, y;
	printf("Enter value of x and y\n");
	scanf("%d%d", &x, &y);
	c = sum(x, y);
	printf("Sum is %d\n", c);
}
int sum(int a, int b)
{
	int s = 0;
	s = a + b;
	return(s);
}
