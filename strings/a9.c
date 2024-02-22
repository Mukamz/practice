#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[30];
	char s2[30];
	int flag = 0, i;

	fgets (s1, sizeof(s1), stdin);
	fgets (s2, sizeof(s2), stdin);


	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("Not same\n");
	}
	else
	{
		printf("Same\n");
	}
}
