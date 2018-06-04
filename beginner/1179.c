// https://www.urionlinejudge.com.br/judge/en/problems/view/1179

#include <stdio.h>

int main(int argc, char *argv[])
{
	int par[5], impar[5], j = 0, k = 0, i, tmp, ptr;
	
	for (i = 0; i <= 14; i++)
		{
			scanf("%d", &tmp);

			if (tmp % 2 == 0)
				{
					if (j <= 4)
						{
							par[j] = tmp;
							j++;
						}
					else
						{
							for (ptr = 0; ptr <= 4; ptr++)
								printf("par[%d] = %d\n", ptr, par[ptr]);
							par[0] = tmp;
							j = 1;
						}
				}
			else
				{
					if (k <= 4)
						{
							impar[k] = tmp;
							k++;
						}
					else
						{
							for (ptr = 0; ptr <= 4; ptr++)
								printf("impar[%d] = %d\n", ptr, impar[ptr]);
							impar[0] = tmp;
							k = 1;
						}
				}
		}

	for (ptr = 0; ptr <= k - 1; ptr++)
		printf("impar[%d] = %d\n", ptr, impar[ptr]);

	for (ptr = 0; ptr <= j - 1; ptr++)
		printf("par[%d] = %d\n", ptr, par[ptr]);
			
    return 0;
}
