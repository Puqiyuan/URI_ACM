// https://www.urionlinejudge.com.br/judge/en/problems/view/1534

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j, n, k, l;

	while (scanf("%d", &n) == 1)
		{
			int **data = (int**)malloc(n * sizeof(int*));
			for (i = 0; i <= n - 1; i++)
				data[i] = (int*)malloc(n * sizeof(int));

			k = 0;
			l = n - 1;
			for (i = 0; i <= n - 1; i++)
				{
					if (k != l)
						{
							data[i][k] = 1;
							data[i][l]  = 2;
						}
					else
						data[i][k] = 2;
					
					k++; l--;
				}
			
			for (i = 0; i <= n - 1; i++)
				{
					for (j = 0; j <= n - 1; j++)
						{
							if (data[i][j] != 1 && data[i][j] != 2)
								data[i][j] = 3;
						}
				}
			
			for (i = 0; i <= n - 1; i++)
				{
					for (j = 0; j <= n - 1; j++)
						printf("%d", data[i][j]);
					printf("\n");
				}
		}
	
    return 0;
}
