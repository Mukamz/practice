#include <stdio.h>
#include <string.h>

int main(void)
{
	int len1 = 0, len2 = 0;
	char s1[20] = "Dennis";
	char s2[20] = "Mukamati";

	len1 = strlen(s1);
	len2 = strlen(s2);

	for (int i = 0; i < 14; i++)
	{
		s1[len1 + i] = s2[i];
	}
	printf("%s", s1);
}

