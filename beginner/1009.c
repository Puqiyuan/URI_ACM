// https://www.urionlinejudge.com.br/judge/en/problems/view/1009

#include <stdio.h>

int main(int argc, char *argv[])
{
	char s[30];
	float fix, sale;
	scanf("%s %f %f", s, &fix, &sale);
	printf("TOTAL = R$ %.2f\n", fix + sale * 0.15);
	
    return 0;
}

