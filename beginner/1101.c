// https://www.urionlinejudge.com.br/judge/en/problems/view/1101

#include <stdio.h>

int main(int argc, char *argv[])
{
	int m, n, min, max, i;
	scanf("%d %d", &m, &n);
	while (m > 0 && n > 0)
		{
			if (m > n)
				{
					max = m;
					min = n;
				}
			else
				{
					max = n;
					min = m;
				}
			for (i = min; i <= max; i++)
				{
					printf("%d ", i);
				}
			printf("Sum=%d\n", (min + max) * (max - min + 1) / 2);
			scanf("%d %d", &m, &n);
		}
	
    return 0;
}
