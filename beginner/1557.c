// https://www.urionlinejudge.com.br/judge/en/problems/view/1557

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n, i, j, width;
	scanf("%d", &n);

	while (n != 0)
		{
			int data[n][n];

			for (j = 0; j <= n - 1; j++)
				{
					data[0][j] = 1 * pow(2, j);
					for (i = 1; i <= n - 1; i++)
						data[i][j] = data[0][j] * pow(2, i);
				}

			for (i = 0; i <= n - 1; i++)
				{
					for (j = 0; j <= n - 1;j ++)
						printf("%d ", data[i][j]);
					printf("\n");
				}

			if ()


			scanf("%d", &n);
		}
	
    return 0;
}
