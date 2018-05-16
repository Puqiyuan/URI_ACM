// https://www.urionlinejudge.com.br/judge/en/problems/view/1020

#include <stdio.h>

int main(int argc, char *argv[])
{
	int days, y, m, d;
	scanf("%d", &days);

	y = days / 365;
	m = (days - y * 365) / 30;
	d = days - y * 365 - m * 30;

	printf("%d ano(s)\n", y);
	printf("%d mes(es)\n", m);
	printf("%d dia(s)\n", d);
    
    return 0;
}

