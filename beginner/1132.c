// https://www.urionlinejudge.com.br/judge/en/problems/view/1132

#include <stdio.h>

int main(int argc, char *argv[])
{
	int start, stop, i, sum = 0, min, max;
	scanf("%d %d", &start, &stop);

	if (start <= stop)
		{
			min = start;
			max = stop;
		}
	else
		{
			min = stop;
			max = start;
		}
	
	for (i = min; i <= max; i++)
		{
			if (i % 13 != 0)
				sum += i;
		}
	printf("%d\n", sum);
		
    return 0;
}
