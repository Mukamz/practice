#include <stdio.h>

int main(void)
{
	int a = 10, b = a;
	int *p, *q;
	p = &a;
	q = &b;

	printf("%d", a);
	printf("%d", *p);
}
