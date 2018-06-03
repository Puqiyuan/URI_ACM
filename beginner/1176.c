// https://www.urionlinejudge.com.br/judge/en/problems/view/1176

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(int argc, char *argv[])
{
	uint64_t data[61];
	int i, n, t;
	data[0] = 0;
	data[1] = 1;
	
	for (i = 2; i <= 60; i++)
		data[i] = data[i - 1] + data[i - 2];

	scanf("%d", &t);
	while (t >= 1)
		{
			scanf("%d", &n);
			printf("Fib(%d) = %" PRId64 "\n", n, data[n]);
			t--;
		}
	
    return 0;
}
