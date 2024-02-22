#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[30];
	char s2[30];
	int l, i;
	char ch;

	fgets (s1, sizeof(s1), stdin);
	fgets (s2, sizeof(s2), stdin);

	l = strlen(s1);

	for (i = 0; i < l/2; i++)
	{
		ch = s1[i];
		s1[i] = s1[l-1-i];
		s1[l-1-i] = ch;
	}

	puts (s1);
}
