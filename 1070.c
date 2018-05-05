// https://www.urionlinejudge.com.br/judge/en/problems/view/1070

#include <stdio.h>

int main(int argc, char *argv[])
{
	int x, i;
	scanf("%d", &x);

	for (i = 1; i <= 6;)
		{
			if (x % 2 != 0)
				{
					printf("%d\n", x);
					i++;
				}
			x++;
		}
	
    return 0;
}

