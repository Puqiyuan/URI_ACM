// https://www.urionlinejudge.com.br/judge/en/problems/view/1066

#include <stdio.h>

int main(int argc, char *argv[])
{
	int data[5], i, pos = 0, neg = 0, even = 0, odd = 0;

	for (i = 0; i <= 4; i++)
		scanf("%d", &data[i]);

	for (i = 0; i <= 4; i++)
		{
			if (data[i] % 2 == 0)
				even++;

			if (data[i] % 2 != 0)
				odd++;

			if (data[i] > 0)
				pos++;

			if (data[i] < 0)
				neg++;
				
		}

	printf("%d valor(es) par(es)\n", even);
	printf("%d valor(es) impar(es)\n", odd);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", neg);
    
    return 0;
}

