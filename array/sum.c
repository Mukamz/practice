#include <stdio.h>

int main(void)
{
	int a[3][3], i, j, SR, SC;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
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
	for (i = 0; i < 3; i++)
	{
		SR = SC = 0;
		for (j = 0; j < 3; j++)
		{
			SR = SR + a[i][j];
			SC = SC + a[j][i];
		}
		printf("SR = %d, SC = %d", SR, SC);
	}
}
