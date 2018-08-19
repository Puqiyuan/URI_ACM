// https://www.urionlinejudge.com.br/judge/en/challenges/view/369/1

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char in[10], eat;

	while (scanf("%[^\n]s", &in) != EOF)
		{
			scanf("%c", &eat);
			
			if (strcmp(in, "esquerda") == 0)
				printf("ingles\n");
			if (strcmp(in, "direita") == 0)
				printf("frances\n");
			if (strcmp(in, "nenhuma") == 0)
				printf("portugues\n");
			if (strcmp(in, "as duas") == 0)
				printf("caiu\n");
		}
	
    return 0;
}

