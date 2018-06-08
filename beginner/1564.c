// https://www.urionlinejudge.com.br/judge/en/problems/view/1564

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;

	while (scanf("%d", &n) != EOF)
		{
			if (n == 0)
				printf("vai ter copa!\n");
			else
				printf("vai ter duas!\n");
		}
	
    return 0;
}
