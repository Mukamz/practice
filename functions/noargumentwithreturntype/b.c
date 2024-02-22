#include <stdio.h>

int sum(void);
int main(void)
{
	int s;
	s = sum();
	printf("Sum is %d\n", s);
}
int sum(void)
{
	int a, b, sum = 0;
	printf("Enter a & b\n");
	scanf("%d%d", &a, &b);
	sum = a + b;
	return sum;
}
