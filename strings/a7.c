#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "DENNIS";
	char s2[] = "ENNIS";
	int value;

	value = strcmp (s1, s2);
	printf("Value is %d\n", value);
}
