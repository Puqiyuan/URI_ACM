// https://www.urionlinejudge.com.br/judge/en/problems/view/2221

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, bon, att1, def1, l1, l2, att2, def2, dab, gua;

	scanf("%d", &n);
	while (n >= 1)
		{
			scanf("%d", &bon);
			scanf("%d %d %d", &att1, &def1, &l1);
			scanf("%d %d %d", &att2, &def2, &l2);
			
			dab = (att1 + def1) / 2;
			gua = (att2 + def2) / 2;

			if (l1 % 2 == 0)
				dab += bon;
			if (l2 % 2 == 0)
				gua += bon;

			if (gua > dab)
				printf("Guarte\n");
			if (dab > gua)
				printf("Dabriel\n");
			if (dab == gua)
				printf("Empate\n");

			n--;
		}
	
    return 0;
}

