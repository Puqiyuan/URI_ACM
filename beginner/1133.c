// https://www.urionlinejudge.com.br/judge/en/problems/view/1133

#include <stdio.h>

int main(int argc, char *argv[])
{
	int start, stop, min, max, i;
	scanf("%d %d", &start, &stop);

	if (start >= stop)
		{
			max = start;
			min = stop;
		}
	else
		{
			max = stop;
			min = start;
		}

	for (i = min + 1; i <= max - 1; i++)
		{
			if (i % 5 == 2 || i % 5 == 3)
				printf("%d\n", i);
		}
	
    return 0;
}

