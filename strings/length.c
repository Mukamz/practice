#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[30];
	int count = 0;

	printf("Enter name\n");
	fgets(name, sizeof(name), stdin);
	count = strlen(name);
	printf("String lenght is %d\n", count);
}
