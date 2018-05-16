// https://www.urionlinejudge.com.br/judge/en/problems/view/1117

#include <stdio.h>

int main(int argc, char *argv[])
{
	int flag = 0;
	float x, sum = 0;
	
	while (flag != 2)
		{
			scanf("%f", &x);

			if (x >= 0 && x <= 10)
				{
					sum += x;
					flag++;
				}
			else
				printf("nota invalida\n");
		}

	if (flag == 2)
		printf("media = %.2f\n", sum / 2);
	
	
    return 0;
}

