// https://www.urionlinejudge.com.br/judge/en/problems/view/2168

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i, j, count;
	scanf("%d", &n);
	
	int map[n+1][n+1];
	for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
				scanf("%d", &map[i][j]);
		}

	for (i = 0; i <= n - 1; i++)
		{
			for (j = 0; j <= n - 1; j++)
				{
					count = 0;
					if (map[i][j] == 1)
						count++;
					if (map[i][j+1] == 1)
						count++;
					if (map[i+1][j] == 1)
						count++;
					if (map[i+1][j+1] == 1)
						count++;
					if (count >= 2)
						printf("S");
					else
						printf("U");
				}
			printf("\n");
		}
	
    return 0;
}

