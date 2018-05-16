// https://www.urionlinejudge.com.br/judge/en/problems/view/1043

#include <stdio.h>

int main(int argc, char *argv[])
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);

	if (a + b > c && b + c > a && c + a > b)
		printf("Perimetro = %.1f\n", a + b + c);

	else
		printf("Area = %.1f\n", (a + b) * c / 2.0);
    
    return 0;
}
