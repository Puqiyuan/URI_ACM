// https://www.urionlinejudge.com.br/judge/en/problems/view/1073

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		{
			if (i % 2 == 0)
				{
					printf("%d^2 = %d\n", i, i * i);
				}
		}
		
    return 0;
}