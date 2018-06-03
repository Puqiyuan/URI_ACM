// https://www.urionlinejudge.com.br/judge/en/problems/view/1175

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, n[20], tmp;

	for (i = 0; i <= 19; i++)
		scanf("%d", &n[i]);

	for (i = 0; i <= 9; i++)
		{
			tmp = n[i];
			n[i] = n[19 - i];
			n[19 - i] = tmp;
		}

	for (i = 0; i <= 19; i++)
		printf("N[%d] = %d\n", i, n[i]);
	
    return 0;
}
