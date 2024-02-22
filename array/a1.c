#include <stdio.h>
#define SIZE 5
/**
 * main - Entry point
 * Return: Always (0) success
 */

int main(void)
{
	int a[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < SIZE; i++)
        {
		printf("%d\n", a[i]);
	}
		printf("Address of a[0] %p\n", &a[0]);
                printf("Address of a[1] %p\n", &a[1]);
}
