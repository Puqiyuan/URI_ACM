// https://www.urionlinejudge.com.br/judge/en/problems/view/1064

#include <stdio.h>

int main(int argc, char *argv[])
{
	float data[6], sum = 0.0;
	int pos = 0, i;

	for (i = 0; i <= 5; i++)
		scanf("%f", &data[i]);

	for (i = 0; i <= 5; i++)
		{
			if (data[i] > 0)
				{
					pos++;
					sum += data[i];
				}
		}
	printf("%d valores positivos\n", pos);
	printf("%.1f\n", sum / pos);
    
    return 0;
}
