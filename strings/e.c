#include <stdio.h>
#include <string.h>
#define SIZE 30

int main(void)
{
	int l, i, ch;
	char s1[SIZE];

	fgets (s1, sizeof(s1), stdin);

	l = strlen(s1);

	for (i = 0; i < l / 2; i++)
	{
		ch = s1[i];
		s1[i] = s1[l - 1 - i];
		s1[l -1 - i] = ch;
	}
	printf("reverse string is %s", s1);
}
