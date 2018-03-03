// https://www.urionlinejudge.com.br/judge/en/problems/view/1042

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, tmp, flag = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
		{
			flag = 1;
			tmp = a;
			a = b;
			b = tmp;
		}

	if (a < c)
		{
			if (c < b)
				printf("%d\n%d\n%d\n", a, c, b);

			else
				printf("%d\n%d\n%d\n", a, b, c);
		}

	else
		printf("%d\n%d\n%d\n", c, a, b);

	printf("\n");
	
	if (flag)
		printf("%d\n%d\n%d\n", b, a, c);

	else
		printf("%d\n%d\n%d\n", a, b, c);
    
    return 0;
}

