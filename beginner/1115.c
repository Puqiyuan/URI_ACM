// https://www.urionlinejudge.com.br/judge/en/problems/view/1115

#include <stdio.h>

int main(int argc, char *argv[])
{
	int x, y;
	scanf("%d %d", &x, &y);
	while(x != 0 && y != 0)
		{
			if (x > 0 && y > 0)
				printf("primeiro\n");
			
			if (x > 0 && y < 0)
				printf("quarto\n");

			if (x < 0 && y < 0)
				printf("terceiro\n");

			if (x < 0 && y > 0)
				printf("segundo\n");
			scanf("%d %d", &x, &y);
		}
	
    return 0;
}
