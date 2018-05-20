// https://www.urionlinejudge.com.br/judge/en/problems/view/1146

#include <stdio.h>

int main(int argc, char *argv[])
{
	int x, i = 1;
	scanf("%d", &x);
	
	while (x != 0)
		{
			if (i % x == 0)
				{
					printf("%d\n", i);
					
					scanf("%d", &x);
					i = 1;
				}
			else
				{
					printf("%d ", i);
					i++;
				}
		}
	
    return 0;
}
