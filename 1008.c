// https://www.urionlinejudge.com.br/judge/en/problems/view/1008

#include <stdio.h>

int main(int argc, char *argv[])
{
	int num, hour;
	float price;
	scanf("%d %d %f", &num, &hour, &price);
	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n", hour * price);
    
    return 0;
}

