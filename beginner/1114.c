// https://www.urionlinejudge.com.br/judge/en/problems/view/1114

#include <stdio.h>

int main(int argc, char *argv[])
{
	int in;
	scanf("%d", &in);
		
	while (in != 2002)
		{
			printf("Senha Invalida\n");
			scanf("%d", &in);
		}
	printf("Acesso Permitido\n");
	
    return 0;
}

