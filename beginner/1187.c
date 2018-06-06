// https://www.urionlinejudge.com.br/judge/en/problems/view/1187

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

	for (i = 0; i <= 4; i++)
		{
			for (j = i + 1; j <= 10 - i; j++)
				sum += m[i][j];
		}

	if (t == 'S')
		printf("%.1f\n", sum);
	else
	printf("%.1f\n", sum / 30.0);
	
    return 0;
}
