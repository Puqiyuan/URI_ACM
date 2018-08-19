// https://www.urionlinejudge.com.br/judge/en/challenges/view/369/4

#include <stdio.h>
#include <stdlib.h>

int test(char **map, int n, int m)
{
	int i, j;

	for (i = 0; i <= n - 1; i++)
		{
			for (j = 0; j <= m - 1; j++)
				{
					if (map[i][j] != '@' && map[i][j] == '#')
						return 0;
				}
		}

	return 1;
}

int main(int argc, char *argv[])
{
	int i, j, n, m;
	scanf("%d %d", &n, &m);
	char map[n][m], eat;
	
	for (i = 0; i <= n - 1; i++)
		{
			scanf("%c", &eat);
			scanf("%s", map[i]);
		}

	for (i = 0; i <= n - 1; i++)
		{
			for (j = 0; j <= m - 1; j++)
				printf("%c", map[i][j]);
			printf("\n");
		}

	for (i = 0; )
	
    return 0;
}

