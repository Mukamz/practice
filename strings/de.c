#include <stdio.h>
#include <string.h>
#define SIZE 40

/**
 * main - Entry point
 * Return: Always (0) success)
 */
int main(void)
{
	char a[SIZE];

	fgets(a, sizeof(a), stdin);
	puts(a);
	return (0);
}
