// https://www.urionlinejudge.com.br/judge/en/problems/view/2061

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, m, i;
	scanf("%d %d", &n, &m);

	char map[m][8];
	
	for (i = 0; i <= m - 1; i++)
		scanf("%s", &map[i]);

	for (i = 0; i <= m - 1; i++)
		{
			if (map[i][0] == 'f')
				n++;
			if (map[i][0] == 'c')
				n--;
		}

	printf("%d\n", n);

	return 0;
}

