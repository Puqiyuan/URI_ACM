// https://www.urionlinejudge.com.br/judge/en/problems/view/1046

#include <stdio.h>

int main(int argc, char *argv[])
{
	int start, end;

	scanf("%d %d", &start, &end);

	if (start >= end)
		printf("O JOGO DUROU %d HORA(S)\n", end + 24 - start);
	else
		printf("O JOGO DUROU %d HORA(S)\n", end - start);
    
    return 0;
}

