// https://www.urionlinejudge.com.br/judge/en/problems/view/1158

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, x, y, a1;
	scanf("%d", &n);

	while (n >= 1)
		{
			scanf("%d %d", &x, &y);

			if (x % 2 == 0)
				a1 = x + 1;
			else
				a1 = x;
			printf("%d\n", (a1 + y - 1) * y);
			n--;
		}
    
    return 0;
}

