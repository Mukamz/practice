#include <stdio.h>

int main(void)
{
	int i, j;
	char dest[30] = "Dennis";
	char src[30] = "Mukamati";

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	printf("%s", dest);

}
