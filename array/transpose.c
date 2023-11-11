#include <stdio.h>

int main(void)
{
	int a[2][3], i, j, k;

	printf("Elements of matrix a:");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
		scanf("%d", &a[i][j]);
		}
	}
	printf("Matrix a:");
	for (i = 0; i < 2; i++)
        {
                for (j = 0; j < 3; j++)
                {
                printf("%d\t", a[i][j]);
                }
		printf("\n");
        }
	printf("Transposed matrix\n");

	for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 2; j++)
                {
                printf("%d\t", a[j][i]);
                }
                printf("\n");
	}


}
