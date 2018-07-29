// https://www.urionlinejudge.com.br/judge/en/problems/view/2060

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, mul2 = 0, mul3 = 0, mul4 = 0, mul5 = 0, i;
	scanf("%d", &n);

	int data[n];

	for (i = 0; i <= n - 1; i++)
		scanf("%d", &data[i]);

	for (i = 0; i <= n - 1; i++)
		{
			if (data[i] % 2 == 0)
				mul2++;

			if (data[i] % 3 == 0)
				mul3++;

			if (data[i] % 4 == 0)
				mul4++;

			if (data[i] % 5 == 0)
				mul5++;
		}

	printf("%d Multiplo(s) de 2\n", mul2);
	printf("%d Multiplo(s) de 3\n", mul3);
	printf("%d Multiplo(s) de 4\n", mul4);
	printf("%d Multiplo(s) de 5\n", mul5);
	
    return 0;
}

