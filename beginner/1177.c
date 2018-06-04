// https://www.urionlinejudge.com.br/judge/en/problems/view/1177

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n[1000], i, t, j = 0;
	scanf("%d", &t);

	for (i = 0; i <= 999; i++)
		{
			if (i % t == 0)
				j = 0;

			n[i] = j;
			j++;
		}

	for (i = 0; i <= 999; i++)
		printf("N[%d] = %d\n", i, n[i]);
	
    return 0;
}
