// https://www.urionlinejudge.com.br/judge/en/problems/view/1097

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;

	while (i <= 9)
		{
			printf("I=%d J=%d\n", i, i + 6);
			printf("I=%d J=%d\n", i, i + 5);
			printf("I=%d J=%d\n", i, i + 4);
			i +=2;
		}
	
    return 0;
}

