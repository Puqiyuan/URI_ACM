// https://www.urionlinejudge.com.br/judge/en/problems/view/2143

#include <stdio.h>

int main(int argc, char *argv[])
{
	int t, tmp, i;
	scanf("%d", &t);

	while (t != 0)
		{
			for (i = 0; i <= t - 1; i++)
				{
					scanf("%d", &tmp);

					if (tmp % 2)
						printf("%d\n", 2 * tmp - 1);
					else
						printf("%d\n", 2 * tmp - 2);
				}
			scanf("%d", &t);
		}
	
    return 0;
}

