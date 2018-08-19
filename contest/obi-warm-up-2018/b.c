// https://www.urionlinejudge.com.br/judge/en/challenges/view/369/2

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i, j;
	scanf("%d", &n);
	int data[n];

	for (i = 0; i <= n - 1; i++)
		scanf("%d", &data[i]);

	for (i = 0; i <= n - 1; i++)
		{
			for (j = i + 1; j <= n - 1; j++)
				{
					if (data[j] > data[i])
						{
							printf("%d ", data[j]);
							break;
						}
				}
			if (j == n)
				printf("* ");
		}

	printf("\n\n");
	
    return 0;
}

