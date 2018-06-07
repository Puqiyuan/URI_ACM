// https://www.urionlinejudge.com.br/judge/en/problems/view/1435

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int n, i, j, max, val, num, k;
	scanf("%d", &n);

	int **data = (int**)malloc(n * sizeof(int*));
	for (i = 0; i <= n - 1; i++)
		data[i] = (int*)malloc(n * sizeof(int));
	
	while (n > 0)
		{
			for (k = 0; k <= n - 1; k++)
				{
					j = k;
					i = 0;
					val = 1;
					num = n - j;
					
					if (num % 2 != 0)
						{
							max = num / 2 + 1;
							while (val <= max)
								{
									data[i][j] = val;
									val++;
									i++; j++;
								}

							val -= 2;

							while (j <= n - 1)
								{
									data[i][j] = val;
									val--;
									i++; j++;
								}
						}
					else
						{
							max = num / 2;
							while (val <= max)
								{
									data[i][j] = val;
									val++;
									i++; j++;
								}
							
							val -= 1;

							while (j <= n - 1)
								{
									data[i][j] = val;
									val--;
									i++; j++;
								}
						}
				}

			for(i = 0; i < n; i++)
				{
					for(j = 0; j < n; j++)
						{
							if(j == 0)
								printf("%3d",data[j][i]);
							else
								{
									if (i <= j)
										printf(" %3d", data[i][j]);

									else
										printf(" %3d",data[j][i]);
								}
						}
					printf("\n");
				}
			
			printf("\n");

			scanf("%d", &n);

			data = (int**)malloc(n * sizeof(int*));
			for (i = 0; i <= n - 1; i++)
				data[i] = (int*)malloc(n * sizeof(int));
		}
	
    return 0;
}
