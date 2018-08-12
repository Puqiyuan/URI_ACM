// https://www.urionlinejudge.com.br/judge/en/problems/view/2172

#include <stdio.h>

int main(int argc, char *argv[])
{
	long x, m;
	scanf("%ld %ld", &x, &m);

	while (x != 0 && m != 0)
		{
			printf("%ld\n", m * x);
			scanf("%ld %ld", &x, &m);
		}
	
    return 0;
}

