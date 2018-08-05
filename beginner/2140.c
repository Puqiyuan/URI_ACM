// https://www.urionlinejudge.com.br/judge/en/problems/view/2140

#include <stdio.h>

int main(int argc, char *argv[])
{
	int map[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
	int i, diff, n, m;

	scanf("%d %d", &n, &m);

	while (n != 0 || m != 0)
		{
			diff = m - n;
			for (i = 0; i <= 14; i++)
				{
					if (diff == map[i])
						{
							printf("possible\n");
							break;
						}
				}
			
			if (i == 15)
				printf("impossible\n");
			
			scanf("%d %d", &n, &m);
		}
	
    return 0;
}

