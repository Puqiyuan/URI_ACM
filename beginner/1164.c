// https://www.urionlinejudge.com.br/judge/en/problems/view/1164

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i, sum, num;
	scanf("%d", &n);

	while (n >= 1)
		{
			scanf("%d", &num);
			sum = 0;
			
			for (i = 1; i <= num / 2; i++)
				{
					if (num % i == 0)
						sum += i;
				}
			
			if (sum == num)
				printf("%d eh perfeito\n", num);
			else
				printf("%d nao eh perfeito\n", num);
			n--;
		}
	
    return 0;
}
