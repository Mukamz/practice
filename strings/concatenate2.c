#include <stdio.h>
#include <string.h>

int main(void)
{
        char s1[20] = "Dennis";
        char s2[20] = "Mukamati";
	
	strcat(s1, s2);

        printf("%s", s1);
}
