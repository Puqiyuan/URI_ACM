// https://www.urionlinejudge.com.br/judge/en/problems/view/1116

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, x, y;
	scanf("%d", &n);
	while (n >= 1)
		{
			scanf("%d %d", &x, &y);
			if (y == 0)
				printf("divisao impossivel\n");
			else
				printf("%.1f\n", (x + 0.0) / y);
			n--;
		}
    
    return 0;
}
