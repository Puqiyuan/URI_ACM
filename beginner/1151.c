// https://www.urionlinejudge.com.br/judge/en/problems/view/1151

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a[45], n, i;
	scanf("%d", &n);
	a[0] = 0;
	a[1] = 1;

	if (n == 1)
		{
			printf("0\n");
			return 0;
		}
	if (n == 2)
		{
			printf("0 1\n");
			return 0;
		}
	

	for (i = 2; i < n; i++)
		a[i] = a[i-1] + a[i-2];

	for (i = 0; i < n - 1; i++)
		printf("%d ", a[i]);
	printf("%d\n", a[n-1]);
	
    return 0;
}
