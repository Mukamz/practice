#include <stdio.h>

int main(void)
{
	char name[30];

	printf("enter  name");
	//scanf("%s", name);
	fgets(name, sizeof(name), stdin);
	printf("%s", name);
}
