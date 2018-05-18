// https://www.urionlinejudge.com.br/judge/en/problems/view/1134

#include <stdio.h>

int main(int argc, char *argv[])
{
	int code, al = 0, ga = 0, di = 0;
	scanf("%d", &code);

	while (code != 4)
		{
			if (code == 1)
				al++;

			if (code == 2)
				ga++;

			if (code == 3)
				di++;
			scanf("%d", &code);
		}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", al);
	printf("Gasolina: %d\n", ga);
	printf("Diesel: %d\n", di);
		
    return 0;
}

