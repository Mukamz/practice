#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30];

	printf("Enter the string\n");
	fgets(a, sizeof(a), stdin);
	printf("%s\n", a);

	return (0);
}
