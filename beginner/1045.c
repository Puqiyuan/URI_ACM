// https://www.urionlinejudge.com.br/judge/en/problems/view/1045

#include <stdio.h>

int main(int argc, char *argv[])
{
	double a, b, c, A, B, C, tmp;
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a < b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}

	if (a > c)
		{
			if (c > b)
				{
					A = a;
					B = c;
					C = b;
				}
			
			else
				{
					A = a;
					B = b;
					C = c;
				}
				
		}
	
	else
		{
			A = c;
			B = a;
			C = b;
		}

	if (A >= B + C)
		printf("NAO FORMA TRIANGULO\n");

	else
		{
			if (A * A == B * B + C * C)
				printf("TRIANGULO RETANGULO\n");

			if (A * A > B * B + C * C)
				printf("TRIANGULO OBTUSANGULO\n");

			if (A * A < B * B + C * C)
				printf("TRIANGULO ACUTANGULO\n");

			if (A == B && B == C)
				printf("TRIANGULO EQUILATERO\n");

			if ( (A == B && A != C) || (A == C && A != B) || (B == C && B != A) )
				printf("TRIANGULO ISOSCELES\n");
		}
	    
    return 0;
}
