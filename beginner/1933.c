// https://www.urionlinejudge.com.br/judge/en/problems/view/1933

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (a >= b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	
    return 0;
}
