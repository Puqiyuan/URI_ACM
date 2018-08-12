// https://www.urionlinejudge.com.br/judge/en/problems/view/2159

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	double n;
	scanf("%lf", &n);

	double tmp = n / log(n);
	printf("%.1f ", tmp);
	printf("%.1f\n", 1.25506 * tmp);
	
    return 0;
}

