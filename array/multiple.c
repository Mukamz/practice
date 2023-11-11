#include <stdio.h>

int main(void)
{
	int a[3][3], b[3][2], c[3][2], k, i, j, sum;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 2; j++)
                {
                        scanf("%d", &b[i][j]);
                }
        }

	for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 3; j++)
                {
                        printf("%d\t", a[i][j]);
                }
		printf("\n");
        }
	printf("Matrix B is:\n");
	for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 2; j++)
                {
                        printf("%d\t", b[i][j]);
                }
                printf("\n");
	}
	printf("Multiplied matrix is:\n");


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			sum = 0;
			for (k = 0; k < 3; k++)
			{
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
