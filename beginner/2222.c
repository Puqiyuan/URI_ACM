// https://www.urionlinejudge.com.br/judge/en/problems/view/2222

#include <stdio.h>
// first quick sort then bin-find.

int partition(int *A, int p, int r);

int quick_sort(int *A, int p, int r)
{
	int q;
  
	if (p < r)
		{
			q = partition(A, p, r);
			quick_sort(A, p, q - 1);
			quick_sort(A, q + 1, r);
		}

	return 0;
}


int partition(int *A, int p, int r)
{
	int x = A[r], i = p - 1, j, tmp1, tmp2;

	for (j = p; j <= r - 1; j++)
		{
			if (A[j] <= x)
				{
					i++;
					tmp1 = A[i];
					A[i] = A[j];
					A[j] = tmp1;
				}
		}

	tmp2 = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp2;

	return i + 1;
}

int bin_search(int *A, int n, int x)
{
	int left = 1; int right = n;

	while(left <= right)
		{
			int middle = (left + right) / 2;
			if (x == A[middle])
				return middle;

			if (x > A[middle])
				left = middle + 1;

			else
				right = middle - 1;
		}

	return -1;
}

int inter(int *arr1, int *arr2, int con1, int con2)
{
	int i, count = 0;
	
	quick_sort(arr1, 1, con1);
	quick_sort(arr2, 1, con2);

	for (i = 1; i <= con1; i++)
		{
			if (bin_search(arr2, con2, arr1[i]) != -1)
				count++;
		}
	
	return count;
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
						printf("%d\n", sets[oper[i][1] - 1][0] + sets[oper[i][2] - 1][0] -
							   inter( sets[oper[i][1] - 1], sets[oper[i][2] - 1],
									  sets[oper[i][1] - 1][0], sets[oper[i][2] - 1][0]));
				}
			scanf("%d", &n);
		}
		
    return 0;
}
