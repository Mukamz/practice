#include <stdio.h>
#include <string.h>

int main(void)
{
	int value;
	char s1[] = "Hello";
	char s2[] = "welcome";

	value = strcmp(s1, s2);

	if ( value == 0)
		puts("same");
	else
		puts("not same");
	printf("%d", value);

}

