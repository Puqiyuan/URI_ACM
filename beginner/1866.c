// https://www.urionlinejudge.com.br/judge/en/problems/view/1866

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, tmp;
	scanf("%d", &n);

	while (n >= 1)
		{
			scanf("%d", &tmp);
			if (tmp % 2 == 0)
				printf("0\n");
			else
				printf("1\n");
			n--;
		}
	
    return 0;
}
