// https://www.urionlinejudge.com.br/judge/en/problems/view/2029

#include <stdio.h>

int main(int argc, char *argv[])
{
	double v, d, area;

	while(scanf("%lf %lf", &v, &d) != EOF)
		{
			area = 3.14 * (d / 2) * (d / 2);
			printf("ALTURA = %.2f\n", v / area);
			printf("AREA = %.2f\n", area);
		}
	
    return 0;
}

