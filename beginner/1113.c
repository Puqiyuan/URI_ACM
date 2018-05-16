// https://www.urionlinejudge.com.br/judge/en/problems/view/1113

#include <stdio.h>

int main(int argc, char *argv[])
{
	int x, y;
	scanf("%d %d", &x, &y);

	while (x != y)
		{
			if (x < y)
				printf("Crescente\n");
			else
				printf("Decrescente\n");
			scanf("%d %d", &x, &y);
		}
	
    return 0;
}

