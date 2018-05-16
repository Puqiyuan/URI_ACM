// https://www.urionlinejudge.com.br/judge/en/problems/view/1050

#include <stdio.h>

int main(int argc, char *argv[])
{
	int id;
	scanf("%d", &id);

	if (id == 61)
		printf("Brasilia\n");

	else if (id == 71)
		printf("Salvador\n");

	else if (id == 11)
		printf("Sao Paulo\n");

	else if (id == 21)
		printf("Rio de Janeiro\n");

	else if (id == 32)
		printf("Juiz de Fora\n");

	else if (id == 19)
		printf("Campinas\n");

	else if (id == 27)
		printf("Vitoria\n");

	else if (id == 31)
		printf("Belo Horizonta\n");

	else
		printf("DDD nao cadastrado\n");
    
    return 0;
}
