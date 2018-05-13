// https://www.urionlinejudge.com.br/judge/en/problems/view/1099

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, x, y, min, max, i, sum;
	scanf("%d", &n);

	while (n >= 1)
		{
			sum = 0;
			scanf("%d %d", &x, &y);
			if (x > y)
				{
					max = x;
					min = y;
				}
			else
				{
					max = y;
					min = x;
				}

			i = min + 1;
			while (i < max)
				{
					if (i % 2 != 0)
						sum += i;
					i++;
				}
			printf("%d\n", sum);
			n--;
		}
	
    return 0;
}
