// https://www.urionlinejudge.com.br/judge/en/problems/view/1071

#include <stdio.h>

int main(int argc, char *argv[])
{
	int x, y, min, max, i, sum = 0;
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x < y)
		{
			min = x;
			max = y;
		}
	else
		{
			min = y;
			max = x;
		}
	
	for (i = min + 1; i < max; i++)
		{
			if (i % 2 != 0)
				{
					sum += i;
				}
		}
	printf("%d\n", sum);
	
    return 0;
}

