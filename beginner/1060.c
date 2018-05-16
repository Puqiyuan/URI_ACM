// https://www.urionlinejudge.com.br/judge/en/problems/view/1060

#include <stdio.h>

int main(int argc, char *argv[])
{
	float in[6];
	int i, count = 0;
	for (i = 0; i <= 5; i++)
		scanf("%f", &in[i]);

	for (i = 0; i <= 5; i++)
		{
			if (in[i] > 0)
				count++;
		}
	printf("%d valores positivos\n", count);
    
    return 0;
}

