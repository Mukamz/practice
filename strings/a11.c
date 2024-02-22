#include <stdio.h>
#include <string.h>
#define SIZE 40

/**
 * main - Entry point
 * Return: Always (0) success
 */
int main(void)
{
	char s1[SIZE];
	int i;

	fgets(s1, sizeof(s1), stdin);
	puts(s1);

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] >= 97 && s1[i] <= 122)
		{
			s1[i] = s1[i] - 32;
		}
	}
	puts(s1);
	return (0);
}
