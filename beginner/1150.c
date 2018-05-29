// https://www.urionlinejudge.com.br/judge/en/problems/view/1150

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int x, z, n, sum;

	scanf("%d", &x);
	scanf("%d", &z);

	while (z <= x)
		scanf("%d", &z);

	n = (int)( ( 1 - 2*x + sqrt((2*x-1)*(2*x-1) + 8 * z) ) / 2 );

	sum = (x + n - 1) * n / 2;

	if (sum <= z)
		printf("%d\n", n + 1);
	else
		printf("%d\n", n);
		
    return 0;
}
