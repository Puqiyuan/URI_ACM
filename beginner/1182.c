// https://www.urionlinejudge.com.br/judge/en/problems/view/1182

#include <stdio.h>

int main(int argc, char *argv[])
{
	float m[12][12], sum = 0.0;
	int i, j, l;
	char t, eat;

	scanf("%d", &l);
	scanf("%c", &eat);
	scanf("%c", &t);
	scanf("%c", &eat);

	for (i = 0; i <= 11; i++)
		{
			for (j = 0; j <= 11; j++)
				scanf("%f", &m[i][j]);
		}

	for (j = 0; j <= 11; j++)
		sum += m[j][l];

	if (t == 'S')
		printf("%.1f\n", sum);
	else
	printf("%.1f\n", sum / 12.0);
	
    return 0;
}
