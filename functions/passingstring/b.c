#include <stdio.h>

void modify(char*, char*);

void main()
{
	char *str1 = "jenny";
	char *str2 = "khatri";
	modify(str1, str2);
}

void modify(char *str1, char *str2)
{
	int i, l = 0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		l = l + 1;
	}
	printf("Length of string 1 is %d\n", l);
	printf("Both strings are %s %s", str1, str2);
}
