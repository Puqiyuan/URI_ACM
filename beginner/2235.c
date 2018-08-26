// https://www.urionlinejudge.com.br/judge/en/problems/view/2235

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, flag = 0;

	scanf("%d %d %d", &a, &b, &c);

	if ((a == b) || (a == c) || (b == c) || (a == b && b == c))
		flag = 1;
	
	if ( ((a + b) == c) || ((a + c) == b) ||  ((b + c) == a) )
		flag = 1;

	if (flag)
		printf("S\n");
	else
		printf("N\n");
	
    return 0;
}

