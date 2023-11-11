#include <stdio.h>
#include <string.h>

int main(void)
{
        int value;
        char s1[] = "Hello";
        char s2[] = "welcome";

        value = strcmp(s1, s2);

	printf("%d", value);
}
