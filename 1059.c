// https://www.urionlinejudge.com.br/judge/en/problems/view/1059

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	for (i = 1; i <= 100; i++)
		{
			if (i % 2 == 0)
				printf("%d\n", i);
		}
    
    return 0;
}
