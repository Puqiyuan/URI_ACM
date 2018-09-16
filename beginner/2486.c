// https://www.urionlinejudge.com.br/judge/en/problems/view/2486

#include <stdio.h>

int main(int argc, char *argv[])
{
	int kind, i, amount, vita;
	char food[100];
	scanf("%d", &kind);

	while (kind != 0)
		{
			vita = 0;
			for (i = 0; i <= kind - 1; i++)
				{
					scanf("%d", &amount);
					scanf("%[^\n]s", food);

					if (food[1] == 's')
						vita += 120 * amount;
					else if (food[1] == 'm' && food[2] == 'o' && food[3] == 'r')
						vita += 85 * amount;
					else if (food[1] == 'm' && food[2] == 'a' && food[3] == 'm')
						vita += 85 * amount;
					else if (food[1] == 'g' && food[2] == 'o')
						vita += 70 * amount;
					else if (food[1] == 'm' && food[2] == 'a' && food[3] == 'n')
						vita += 56 * amount;
					else if (food[1] == 'l')
						vita += 50 * amount;
					else if (food[1] == 'b')
						vita += 34 * amount;
				}

			if (vita < 110)
				printf("Mais %d mg\n", 110 - vita);
			else if (vita > 130)
				printf("Menos %d mg\n", vita - 130);
			else
				printf("%d mg\n", vita);

			scanf("%d", &kind);
		}
	
	return 0;
}
