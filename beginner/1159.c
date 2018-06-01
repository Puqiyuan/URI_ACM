// https://www.urionlinejudge.com.br/judge/en/problems/view/1158

#include <stdio.h>

int main(int argc, char *argv[])
{
	int x, a1;
	scanf("%d", &x);

	while (x != 0)
		{
			if (x % 2 == 0)
				a1 = x;
			else
				a1 = x + 1;
			printf("%d\n", 20 + 5 * a1);
			
			scanf("%d", &x);
		}
    
    return 0;
}

