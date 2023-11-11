#include <stdio.h>

int main(void)
{
	char s1[20] = "Dennis";
	char s2[30];

	int i = 0, j = 0;

	while (s1[i++])
		j++;

	for (i = 0; s1[i] && i < 6; i++)
		s2[i] = s1[i];

	for (i = j; i < 6; i++)
		s2[i] = '\0';

	printf("%s", s2);

}
