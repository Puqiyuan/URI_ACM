// https://www.urionlinejudge.com.br/judge/en/problems/view/1075

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i;
	scanf("%d", &n);

	for (i = 1; i <= 10000; i++)
		{
			if (i % n == 2)
				printf("%d\n", i);
		}
	
    return 0;
}
