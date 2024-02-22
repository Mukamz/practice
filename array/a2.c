#include <stdio.h>
#define SIZE 5
/**
 * main - Entry point
 * Return: Always (0) success
 */

int main(void)
{
	int a[2][SIZE];
	int i, j;

	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < SIZE; i++)
		{
			scanf("%d", &a[j][i]);
		}
	}
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < SIZE; i++)
		{
			printf("%d\t", a[j][i]);
		}
		printf("\n");
	}
	printf("Value of a[1][0] is %d\n", a[1][0]);
	return (0);
}
