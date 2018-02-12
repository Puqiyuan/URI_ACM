#include <stdio.h>

int abs(int in)
{
	if (in < 0)
		return -in;

	return in;
}

int maior(int a, int b)
{
	return (a + b + abs(a-b)) / 2;
}

int main(int argc, char *argv[])
{
	int a, b, c, tmp;
	scanf("%d %d %d", &a, &b, &c);
	
	tmp = maior(a, b);
	printf("%d eh o maior\n", maior(tmp, c));
	
    return 0;
}
