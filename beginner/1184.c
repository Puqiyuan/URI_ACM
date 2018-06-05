// https://www.urionlinejudge.com.br/judge/en/problems/view/1181

#include <stdio.h>

int main(int argc, char *argv[])
{
	float m[12][12], sum = 0.0;
	int i, j;
	char t, eat;

	scanf("%c", &t);
	scanf("%c", &eat);

	for (i = 0; i <= 11; i++)
		{
			for (j = 0; j <= 11; j++)
				scanf("%f", &m[i][j]);
		}

	for (i = 1; i <= 11; i++)
		{
			for (j = 0; j <= i - 1; j++)
				sum += m[i][j];
		}

	if (t == 'S')
		printf("%.1f\n", sum);
	else
	printf("%.1f\n", sum / 66.0);
	
    return 0;
}
