#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "Dennis";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{

                if (a[i] >= 97 && a[i] <= 122)
                {
                        a[i] = a[i] - 32;
                }
        }
        printf("%s", a);
}
		
