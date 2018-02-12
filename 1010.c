// https://www.urionlinejudge.com.br/judge/en/problems/view/1010

#include <stdio.h>

int main(int argc, char *argv[])
{
	int p1, u1;
	int p2, u2;
	float pri1, pri2;
	
	scanf("%d %d %f", &p1, &u1, &pri1);
	scanf("%d %d %f", &p2, &u2, &pri2);
	printf("VALOR A PAGAR: R$ %.2f\n", u1 * pri1 + u2 * pri2);
    
    return 0;
}

