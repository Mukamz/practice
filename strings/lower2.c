#include <stdio.h>

int main(void)
{
	char s1[20] = "JAYANTi";

	for (int i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] >= 65 && s1[i] <=90)
		{
			s1[i] = s1[i] + 32;
		}
	}
	printf("%s", s1);
}
