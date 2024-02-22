#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[40] = "Denni";
	char s2[10] = "Mukamati";

	strcat(s1, s2);
	printf("String is %s\n", s1);
}
