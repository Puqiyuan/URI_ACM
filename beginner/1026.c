// https://www.urionlinejudge.com.br/judge/en/problems/view/1026

#include <stdio.h>

int main(int argc, char *argv[])
{
	int unsigned long a, b, c;

	while (scanf("%lu %lu", &a, &b) == 2)
		{
			c = (~a & b) | (a & ~b);
			printf("%lu\n", c);
		}
	
    return 0;
}
