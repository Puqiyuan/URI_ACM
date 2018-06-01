// https://www.urionlinejudge.com.br/judge/en/problems/view/1157

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i;
	scanf("%d", &n);

	for (i = 1; i <= n / 2 + 1; i++)
		{
			if (n % i == 0)
				printf("%d\n", i);
		}

	printf("%d\n", n);
	
    return 0;
}
