// https://www.urionlinejudge.com.br/judge/en/problems/view/2006

#include <stdio.h>

int main(int argc, char *argv[])
{
	int cort, i, tmp, count = 0;
	scanf("%d", &cort);

	for (i = 0; i <= 4; i++)
		{
			scanf("%d", &tmp);
			if (tmp == cort)
				count++;
		}

	printf("%d\n", count);
	
    return 0;
}

