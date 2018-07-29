// https://www.urionlinejudge.com.br/judge/en/problems/view/2031

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char pl1[8], pl2[8];
	int n;
	scanf("%d", &n);

	while(n >= 1)
		{
			scanf("%s %s", &pl1, &pl2);
			if (strcmp(pl1, "ataque") == 0 && (strcmp(pl2, "pedra")) == 0)
				printf("Jogador 1 venceu\n");
			else if (strcmp(pl1, "pedra") == 0 && (strcmp(pl2, "ataque") == 0))
				printf("Jogador 2 venceu\n");
			else if (strcmp(pl1, "pedra") == 0 && (strcmp(pl2, "papel") == 0))
				printf("Jogador 1 venceu\n");
			else if (strcmp(pl2, "pedra") == 0 && (strcmp(pl1, "papel") == 0))
				printf("Jogador 2 venceu\n");
			else if (strcmp(pl1, "papel") == 0 && strcmp(pl2, "ataque") == 0)
				printf("Jogador 2 venceu\n");
			else if (strcmp(pl2, "papel") == 0 && strcmp(pl1, "ataque") == 0)
				printf("Jogador 1 venceu\n");
			else if (strcmp(pl1, "papel") == 0 && (strcmp(pl1, "papel") == 0))
				printf("Ambos venceram\n");
			else if (strcmp(pl1, "pedra") == 0 && (strcmp(pl1, "pedra") == 0))
				printf("Sem ganhador\n");
			else if (strcmp(pl1, "ataque") == 0 && (strcmp(pl1, "ataque") == 0))
					 printf("Aniquilacao mutua\n");
			n--;
				
		}
	
    return 0;
}
