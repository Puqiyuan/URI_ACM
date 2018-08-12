// https://www.urionlinejudge.com.br/judge/en/problems/view/2163

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, m, i, j, l, k, flag = 1;
	scanf("%d %d", &n, &m);

	int map[n][m];

	for (i = 0; i <= n - 1; i++)
		{
			for (j = 0; j <= m - 1; j++)
				scanf("%d", &map[i][j]);
		}

	for (i = 0; i <= n - 1; i++)
		{
			for (j = 0; j <= m - 1; j++)
				{
					if (map[i][j] == 42)
						{
							if (i - 1 >= 0 && j - 1 >= 0 && j + 1 <= m - 1 && i + 1 <= n - 1)
								{
									if (map[i-1][j-1] == 7 && map[i-1][j] == 7 && map[i-1][j+1] == 7 && map[i][j-1] == 7 &&
										map[i][j+1] == 7 && map[i+1][j-1] == 7 && map[i+1][j] == 7 && map[i+1][j+1] == 7)
										{
											flag = 0;
											printf("%d %d\n", i+1, j+1);
										}
								}
						}
				}
		}
	if (flag)
		printf("0 0\n");

    return 0;
}

