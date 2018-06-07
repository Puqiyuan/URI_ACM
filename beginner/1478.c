// https://www.urionlinejudge.com.br/judge/en/problems/view/1435

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int n, i, j, val;
	scanf("%d", &n);

	int **data = (int**)malloc(n * sizeof(int*));
	for (i = 0; i <= n - 1; i++)
		data[i] = (int*)malloc(n * sizeof(int));
	
	while (n > 0)
		{
			for (j = 0; j <= n - 1; j++)
				{
					i = 0;
					val = j + 1;

					while (val >= 1)
						{
							data[i][j] = val;
							val--;
							i++;
						}

					val += 2;

					while (i <= n - 1)
						{
							data[i][j] = val;
							val++;
							i++;
						}
				}

			for(i = 0; i < n; i++)
				{
					for(j = 0; j < n; j++)
						{
							if(j == 0)
								printf("%3d",data[i][j]);
							else
								printf(" %3d", data[i][j]);
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
