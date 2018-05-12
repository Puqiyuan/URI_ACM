// https://www.urionlinejudge.com.br/judge/en/problems/view/1096

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1, j = 7;

	while (i <= 9)
		{
			printf("I=%d J=7\n", i);
			printf("I=%d J=6\n", i);
			printf("I=%d J=5\n", i);
			i += 2;
		}
	
    return 0;
}

