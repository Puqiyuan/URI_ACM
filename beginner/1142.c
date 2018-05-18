// https://www.urionlinejudge.com.br/judge/en/problems/view/1142

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i = 1, j = 2, k = 3;
	scanf("%d", &n);

	while(n >= 1)
		{
			printf("%d %d %d PUM\n", i, j, k);
			i += 4;
			j += 4;
			k += 4;
			n--;
		}
	
    return 0;
}

