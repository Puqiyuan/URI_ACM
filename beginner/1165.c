// https://www.urionlinejudge.com.br/judge/en/problems/view/1165

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, x, i;
	scanf("%d", &n);

	while (n >= 1)
		{
			scanf("%d", &x);

			if (x % 2 == 0 && x != 2)
				printf("%d nao eh primo\n", x);
			else
				{
					for (i = 2; i <= x / 2 + 1; i++)
						{
							if (x % i == 0 && x != 2)
								{
									printf("%d nao eh primo\n", x);
									break;
								}

							if (i == x / 2 + 1)
								printf("%d eh primo\n", x);
						}
				}
			n--;
		}
	
    return 0;
}
