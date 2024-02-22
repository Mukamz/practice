#include <stdio.h>
#define SIZE 5

int main(void)
{
	int a[SIZE] = {10, 20, 30, 40, 50};


	for (int i = 0; i < SIZE; i++)
        {
                printf("%d\t", a[i]);
        }
}
