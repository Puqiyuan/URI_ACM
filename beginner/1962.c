// https://www.urionlinejudge.com.br/judge/en/problems/view/1962

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, tmp, diff;
	scanf("%d", &n);

	while (n >= 1)
		{
			scanf("%d", &tmp);

			diff = 2015 - tmp;
			if (diff == 0)
				printf("1 A.C.\n");

			else if (diff > 0)
				printf("%d D.C.\n", diff);

			else
				printf("%d A.C.\n", -(diff-1));
			n--;
		}
	
    return 0;
}
