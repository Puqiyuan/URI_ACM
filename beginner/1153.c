// https://www.urionlinejudge.com.br/judge/en/problems/view/1153

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i;
	int sum = 1;
	scanf("%d", &n);

	for (i = n; i >=2; i--)
		sum *= i;

	printf("%d\n", sum);
    return 0;
}
