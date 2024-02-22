#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "DENNIS";
	char s2[] = "DENNIS";
	int flag = 0, i;


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
