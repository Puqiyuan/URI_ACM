// https://www.urionlinejudge.com.br/judge/en/problems/view/1921
#include <stdio.h>

int main(int argc, char *argv[])
{
	long long int n;
	scanf("%lld", &n);

	printf("%lld\n", (n * (n - 3)) / 2);
	
    return 0;
}
