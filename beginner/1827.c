// https://www.urionlinejudge.com.br/judge/en/problems/view/1827

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n, i, j;
	
	while(scanf("%d", &n) != EOF)
		{
			int **data = (int**)malloc(n * sizeof(int*));
			for (i = 0; i <= n - 1; i++)
				data[i] = (int*)malloc(sizeof(int) * n);

			data[n/2][n/2] = 4;

			for (i = n / 3; i <= n - 1 - n / 3; i++)
				{
					for (j = n / 3; j <= n - 1 - n / 3; j++)
						{
							if (data[i][j] != 4)
								data[i][j] = 1;
						}
				}

			i = 0;
			j = 0;
			while (data[i][j] == 0)
				{
					data[i][j] = 2;
					i++;
					j++;
				}
			i = n - 1;
			j = n - 1;
			while (data[i][j] == 0)
				{
					data[i][j] = 2;
					i--;
					j--;
				}

			i = 0;
			j = n - 1;
			while (data[i][j] == 0)
				{
					data[i][j] = 3;
					i++;
					j--;
				}
			i = n - 1;
			j = 0;
			while (data[i][j] == 0)
				{
					data[i][j] = 3;
					i--;
					j++;
				}

			for (i = 0; i <= n - 1; i++)
				{
					for (j = 0; j <= n - 1; j++)
						printf("%d", data[i][j]);
					printf("\n");
				}
			printf("\n");
		}
	
	return 0;
}
