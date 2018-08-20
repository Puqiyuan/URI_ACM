// https://www.urionlinejudge.com.br/judge/en/problems/view/2222

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int inter(int *arr1, int *arr2, int con1, int con2)
{
	int i, j, count, len, k = 1, l;

	if (con1 >= con2)
		len = con1;
	else
		len = con2;
	
	long *res = (long*)malloc((len + 2) * sizeof(long));
	res[1] = LONG_MAX;
	res[0] = 0;
	
	for (i = 1; i <= con1; i++)
		{
			for (j = 1; j <= con2; j++)
				{
					if (arr1[i] == arr2[j])
						{
							for (l = 1; l <= k; l++)
								{
									if (res[l] != arr1[i])
										continue;
									
									else
										break;
								}

							if (l == k + 1)
								{
									res[k] = arr1[i];
									k++;
									res[0] = k - 1;
									break;
								}
						}
				}
		}
	count = res[0];
	free(res);

	return count;
}

int Union(int *arr1, int *arr2, int con1, int con2)
{
	int len = (con1 + con2 + 2), i, k, l;
	int *res = (int*)malloc(len * sizeof(int));
	int *Res = (int*)malloc(len * sizeof(int));
	Res[0] = 0;
	Res[1] = INT_MAX;

	for (i = 1; i <= con1; i++)
		res[i] = arr1[i];
	for (k = 1; k <= con2; k++)
		{
			res[i] = arr2[k];
			i++;
		}

	k = 1;
	for (i = 1; i <= con1 + con2; i++)
		{
			for (l = 1; l <= k; l++)
				{
					if (Res[l] != res[i])
						continue;
					else
						break;
				}
			if (l == k + 1)
				{
					Res[k] = res[i];
					k++;
					Res[0] = k - 1;
				}
		}
	
	return Res[0];
}

int main(int argc, char *argv[])
{
	int n, sets[10001][62], i, j, q;
	scanf("%d", &n);

	while (n != 0)
		{
			for (i = 0; i <= n - 1; i++)
				{
					scanf("%d", &sets[i][0]);
					for (j = 1; j <= sets[i][0]; j++)
						scanf("%d", &sets[i][j]);
				}


			scanf("%d", &q);
			int oper[q][3];
			for (i = 0 ;i <= q - 1; i++)
				scanf("%d %d %d", &oper[i][0], &oper[i][1], &oper[i][2]);

			for (i = 0; i <= q - 1; i++)
				{
					if (oper[i][0] == 1)
						printf("%d\n", inter( sets[oper[i][1] - 1], sets[oper[i][2] - 1],
											  sets[oper[i][1] - 1][0], sets[oper[i][2] - 1][0]) );
					if (oper[i][0] == 2)
						printf("%d\n", Union( sets[oper[i][1] - 1], sets[oper[i][2] - 1],
											  sets[oper[i][1] - 1][0], sets[oper[i][2] - 1][0]));
				}
			scanf("%d", &n);
		}

		
    return 0;
}

 
