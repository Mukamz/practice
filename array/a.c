#include <stdio.h>
#define SIZE 5

int main(void)
{
	int a[SIZE];


	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &a[i]);
	}
	 for (int i = 0; i < SIZE; i++)
        {
                printf("%d\t", a[i]);
        }
}
