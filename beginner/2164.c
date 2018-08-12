// https://www.urionlinejudge.com.br/judge/en/problems/view/2164

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	double n, tmp1, tmp2;
	scanf("%lf", &n);
	
	tmp1 = pow((1 + sqrt(5)) / 2, n);
	tmp2 = pow((1 - sqrt(5)) / 2, n);

	printf("%.1f\n", (tmp1 - tmp2) / sqrt(5));
	
    return 0;
}

