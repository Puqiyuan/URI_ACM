// https://www.urionlinejudge.com.br/judge/en/problems/view/1149

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, n;
	scanf("%d %d", &a, &n);

	while (n == 0 || n < 0)
		scanf("%d", &n);

	printf("%d\n", (2 * a + n - 1) * n / 2);
    
    return 0;
}
