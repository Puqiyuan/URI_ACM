// https://www.urionlinejudge.com.br/judge/en/problems/view/1021


#include <stdio.h>

int main(int argc, char *argv[])
{
	double in, trial;
	int n, f;

	scanf("%lf", &in);

	n = (int)(in);
                                                                                                                 
	printf("NOTAS:\n");
	f = n / 100;
	printf("%d nota(s) de R$ 100.00\n", f);
	n = n - f * 100;

	f = n / 50;
	printf("%d nota(s) de R$ 50.00\n", f);
	n = n - f * 50;
	
	f = n / 20;
	printf("%d nota(s) de R$ 20.00\n", f);
	n = n - f * 20;

	f = n / 10;
	printf("%d nota(s) de R$ 10.00\n", f);
	n = n - f * 10;

	f = n / 5;
	printf("%d nota(s) de R$ 5.00\n", f);
	n = n - f * 5;

	f = n / 2;
	printf("%d nota(s) de R$ 2.00\n", f);
	n = n - f * 2;

		
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", n);

	trial = in - (int)(in);
	n = (int)(trial * 100);

	f = n / 50;
	printf("%d moeda(s) de R$ 0.50\n", f);
	n = n - f * 50;

	f = n / 25;
	printf("%d moeda(s) de R$ 0.25\n", f);
	n = n - f * 25;

	f = n / 10;
	printf("%d moeda(s) de R$ 0.10\n", f);
	n = n - f * 10;

	f = n / 5;
	printf("%d moeda(s) de R$ 0.05\n", f);
	n = n - f * 5;

	printf("%d moeda(s) de R$ 0.01\n", n);

	return 0;
}
