// https://www.urionlinejudge.com.br/judge/en/problems/view/1178

#include <stdio.h>

int main(int argc, char *argv[])
{
	double n[100], x;
	int i;
	scanf("%lf", &x);

	n[0] = x;
	for (i = 1; i <= 99; i++)
		n[i] = n[i - 1] / 2;

	for (i = 0; i <= 99; i++)
		printf("N[%d] = %.4f\n", i, n[i]);
	
    return 0;
}
