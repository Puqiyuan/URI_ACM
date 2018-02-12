// https://www.urionlinejudge.com.br/judge/en/problems/view/1018

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, f;
	scanf("%d", &n);

	printf("%d\n", n);
	f = n / 100;
	printf("%d nota(s) de R$ 100,00\n", f);
	n = n - f * 100;
	
	f = n / 50;
	printf("%d nota(s) de R$ 50,00\n", f);
	n = n - f * 50;

	f = n / 20;
	printf("%d nota(s) de R$ 20,00\n", f);
	n = n - f * 20;

	f = n / 10;
	printf("%d nota(s) de R$ 10,00\n", f);
	n = n - f * 10;

	f = n / 5;
	printf("%d nota(s) de R$ 5,00\n", f);
	n = n - f * 5;

	f = n / 2;
	printf("%d nota(s) de R$ 2,00\n", f);
	n = n - f * 2;

	printf("%d nota(s) de R$ 1,00\n", n);
			
    return 0;
}

