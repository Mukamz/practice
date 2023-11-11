#include <stdio.h>
#include <string.h>

int main(void)
{
	int value;
	char s1[] = "Dennis";
	char s2[] = "Mukamati";

	value = strcmp(s1, s2);

	printf("%d", value);
}
