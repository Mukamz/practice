#include <stdio.h>
#include <string.h>

int main(void)
{
 	int i = 0;
	char s1[] = "Dennis";
	char s2[] = "Mukamati";
	
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		s1[i++];
		s2[i++];
	}
	int v = 0;
	v = s1 - s2;
	printf("%d", v);
}
