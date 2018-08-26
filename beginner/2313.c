// https://www.urionlinejudge.com.br/judge/en/problems/view/2313

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
		{
			printf("Valido-");
			if (a == b && b == c)
				printf("Equilatero\n");
			
			if (a != b && a != c && b != c)
				printf("Escaleno\n");

			if ((a == b && a != c) || (a == c && a != b) || (b == c && a != b))
				printf("Isoceles\n");

			printf("Retangulo: ");
			if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
				printf("S\n");
			else
				printf("N\n");
		}
	else
		printf("Invalido\n");
	
    return 0;
}

