// https://www.urionlinejudge.com.br/judge/en/problems/view/1557

#include <stdio.h>
#include <math.h>

int width(int data)
{
	if (data <= 9)
		return 1;
	else if (data <= 99)
		return 2;
	else if (data <= 999)
		return 3;
	else if (data <= 9999)
		return 4;
	else if (data <= 99999)
		return 5;
	else if (data <= 999999)
		return 6;
	else if (data <= 9999999)
		return 7;
	else if (data <= 99999999)
		return 8;

	return 9;
}

int space(int max, int length, int j)
{
	int i;

	if (j == 0)
		{
			for (i = 0; i < max -length; i++)
				printf(" ");
		}

	else
		{
			for (i = 0; i < max + 1 - length; i++)
				printf(" ");
		}

	return 0;
}

int main(int argc, char *argv[])
{
	int n, i, j, max, length;
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

			max = width(data[n-1][n-1]);
		
			for (i = 0; i <= n - 1; i++)
				{
					for (j = 0; j <= n - 1; j++)
						{
							length = width(data[i][j]);
							space(max, length, j);
							printf("%d", data[i][j]);
						}
					printf("\n");
				}

			printf("\n");
			scanf("%d", &n);
		}

    return 0;
}
