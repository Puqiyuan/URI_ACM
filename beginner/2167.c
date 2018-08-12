// https://www.urionlinejudge.com.br/judge/en/problems/view/2167

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i;
	scanf("%d", &n);

	int spd[n];
	
	for (i = 0; i <= n - 1; i++)
		scanf("%d", &spd[i]);

	for (i = 0; i <= n - 2; i++)
		{
			if (spd[i+1] - spd[i] >= 0)
				continue;
			else
				break;
		}

	if (i == n - 1)
		printf("0\n");
	else
		printf("%d\n", i + 2);
	
    return 0;
}
