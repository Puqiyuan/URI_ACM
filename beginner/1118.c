// https://www.urionlinejudge.com.br/judge/en/problems/view/1118

#include <stdio.h>

int main(int argc, char *argv[])
{
	int stop = 1, flag;
	float x, sum;

	while (stop == 1)
		{
			flag = 0;
			sum = 0;
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
				{
					printf("media = %.2f\n", sum / 2);
					printf("novo calculo (1-sim 2-nao)\n");
					scanf("%d", &stop);
					while (stop != 1 && stop != 2)
						{
							printf("novo calculo (1-sim 2-nao)\n");
							scanf("%d", &stop);
						}
				}
		}
	
    return 0;
}
