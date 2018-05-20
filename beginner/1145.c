// https://www.urionlinejudge.com.br/judge/en/problems/view/1145

#include <stdio.h>

int main(int argc, char *argv[])
{
	int x, y, i = 1;
	scanf("%d %d", &x, &y);

	while (i <= y)
		{
			if (i % x != 0)
				printf("%d ", i);
			else
				printf("%d\n", i);
			
			i++;
		}
	
    return 0;
}
