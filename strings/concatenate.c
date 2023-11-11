#include <stdio.h>
#include <string.h>

int main(void)
{
	int len1, len2;
	char s1[20];
	char s2[20];
	len1 = strlen(s1);
	len2 = strlen(s2);
	
	fgets (s1, sizeof(s1), stdin);
	fgets (s2, sizeof(s2), stdin);

	for (int i = 0; i < 12; i ++)
	{
		s1[len1 + i] = s2[i];
	}

	printf("%s", s1);
}
