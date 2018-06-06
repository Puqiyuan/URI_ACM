// https://www.urionlinejudge.com.br/judge/en/problems/view/1188

#include <stdio.h>

int main(int argc, char *argv[])
{
	double m[12][12], sum = 0.0;
	int i, j;
	char t, eat;

	scanf("%c", &t);
	scanf("%c", &eat);

	for (i = 0; i <= 11; i++)
		{
			for (j = 0; j <= 11; j++)
				scanf("%lf", &m[i][j]);
		}
	
	for (i = 7; i <= 11; i++)
		{
			for (j = 12 - i; j <= i - 1; j++)
				sum += m[i][j];
		}

	if (t == 'S')
		printf("%.1f\n", sum);
	else
	printf("%.1f\n", sum / 30.0);
	
    return 0;
}
