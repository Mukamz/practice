#include <stdio.h>
#include <string.h>


int main(void)
{
	int l;
	char ch;
	char s1[30] = "Jayanti";
	l = strlen(s1);


	for (int i = 0; i < l / 2; i++)
	{
		ch = s1[i];
		s1[i] = s1[l - 1 - i];
		s1[l -1 -i] = ch;
	}
	printf("%s", s1);
}
