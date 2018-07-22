// https://www.urionlinejudge.com.br/judge/en/problems/view/2003

#include <stdio.h>

int main(int argc, char *argv[])
{
	int hor, min;
	while (scanf("%d:%d", &hor, &min) != EOF)
	{

		hor += 1;

		if (hor < 8)
			printf("Atraso maximo: 0\n");
		else
			printf("Atraso maximo: %d\n", (hor - 8) * 60 + min);
	}
	
    return 0;
}
