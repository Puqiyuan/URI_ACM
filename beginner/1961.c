// https://www.urionlinejudge.com.br/judge/en/problems/view/1961

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int het, num, i, diff;
	scanf("%d %d", &het, &num);
	int *hts = (int*)malloc(num * sizeof(int));

	for (i = 0; i <= num - 1; i++)
		scanf("%d", &hts[i]);

	for (i = 0; i <= num - 2; i++)
		{
			diff = hts[i+1] - hts[i];
			if (diff < 0)
				diff = -diff;
			
			if (diff <= het)
				continue;
			else
				break;
		}

	if (i == num - 1)
		printf("YOU WIN\n");
	else
		printf("GAME OVER\n");
		
    return 0;
}
