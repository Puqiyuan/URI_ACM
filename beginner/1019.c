// https://www.urionlinejudge.com.br/judge/en/problems/view/1019

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, h, m, s;
	scanf("%d", &n);

	h = n / 3600;
	m = (n - h * 3600) / 60;
	s = (n - h * 3600 - 60 * m);
	
	printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}

