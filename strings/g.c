#include <stdio.h>
#include <string.h>

int main(void)
{
	int len1, len2;
	char s1[40] = "Dennis Mukamati";
	char s2[20] = "Muriira";
	len1 = strlen(s1);
	len2 = strlen(s2);
	
	for (int i = 0; i <= 22; i ++)
	{
		s1[len1 + i] = s2[i];
	}

	printf("%s", s1);
}
