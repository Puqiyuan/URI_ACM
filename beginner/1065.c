// https://www.urionlinejudge.com.br/judge/en/problems/view/1065

#include <stdio.h>

int main(int argc, char *argv[])
{
	int data[5], i, count = 0;

	for (i = 0; i <= 4; i++)
		scanf("%d", &data[i]);

	for (i = 0; i <= 4; i++)
		{
			if (data[i] % 2 == 0)
				count++;
		}

	printf("%d valores pares\n", count);
    
    return 0;
}

