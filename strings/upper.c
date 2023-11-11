#include <stdio.h>
#include <string.h>
#define SIZE 40

int main(void)
{
	char a[SIZE] = "DenNis MukaMati";

	printf("The string is: \n");

	printf("%s", a);

	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
	}
	printf("lower case string is %s", a);
}
