// https://www.urionlinejudge.com.br/judge/en/problems/view/2028
// note that there is no space at the end of line of output

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, cas = 1, j, count, i;
	while (scanf("%d", &n) != EOF)
		{
			count = (n+1) * n / 2 + 1;

			printf("Caso %d: %d ", cas, count);

			if (count > 1)
				printf("numeros\n");

			else
				printf("numero\n");

			if (n > 0)
				printf("0 ");
			else
				printf("0\n");
			
			for (i = 1; i <= n - 1; i++)
				{
					for (j = 1; j <= i; j++)
						printf("%d ", i);
				}

			for (i = 1; i <= n - 1; i++)
				printf("%d ", n);

			if (n > 0)
				printf("%d\n", n);
			printf("\n");
			cas++;
		}
	
    return 0;
}
