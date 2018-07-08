#include <stdio.h>

int judge(int a, int b, int c)
{
	if (a + b > c && a + c > b && b + c > a)
		return 1;
	
	return 0;
}

int main(int argc, char *argv[])
{
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (judge(a, b, c) == 1 || judge(a, b, d) == 1 || judge(a, c, d) == 1 || judge(b, c, d) == 1)
		printf("S\n");
	else
		printf("N\n");
	
    return 0;
}
