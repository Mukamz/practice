#include <stdio.h>
#include <string.h>

int main(void)
{
	int length = 0, i;
	char a[30];

	fgets(a, sizeof(a), stdin);

	printf("The string is %s\n", a);
	for (i = 0; a[i] != '\0'; i++)
	{
		length = length + 1;
	}
	printf("Length of string is: %d\n", length);
	return (0);
}
