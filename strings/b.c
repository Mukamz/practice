#include <stdio.h>
#include <string.h>

int main(void)
{
	int flag = 0;
	char s1[] = "Hello";
	char s2[] = "Hello";

	for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		puts("not same");	

}

