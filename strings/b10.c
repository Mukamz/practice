#include <stdio.h>
#include <string.h>
#define SIZE 30
int main(void)
{
	int length = 0, i;
	char a[SIZE] = "Dennis";

	for (i = 0; i != '\0'; i++)
	{
		length = length + 1;
	}
	printf("Lenght is %d\n", length);
}
