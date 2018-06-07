// https://www.urionlinejudge.com.br/judge/en/problems/view/1189

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
	
	for (j = 4; j >= 0; j--)
		{
			for (i = j + 1; i <= 10 - j; i++)
				sum += m[i][j];
		}

	if (t == 'S')
		printf("%.1f\n", sum);
	else
	printf("%.1f\n", sum / 30.0);
	
    return 0;
}
