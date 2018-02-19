// https://www.urionlinejudge.com.br/judge/en/problems/view/1036

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double a, b, c, drta;
	scanf("%lf %lf %lf", &a, &b, &c);
	drta = b * b - 4 * a * c;

	if (a == 0 || drta < 0)
		printf("Impossivel calcular\n");

	else
		{
			printf("R1 = %.5f\n", (-b + sqrt(drta)) / (2 * a));
			printf("R2 = %.5f\n", (-b - sqrt(drta)) / (2 * a));
		}
    
    return 0;
}
