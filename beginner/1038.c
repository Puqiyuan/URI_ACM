// https://www.urionlinejudge.com.br/judge/en/problems/view/1038

#include <stdio.h>

int main(int argc, char *argv[])
{
	int x, y;
	float data[5][2];
	
	data[0][0] = 1; data[0][1] = 4;
	data[1][0] = 2; data[1][1] = 4.5;
	data[2][0] = 3; data[2][1] = 5;
	data[3][0] = 4; data[3][1] = 2;
	data[4][0] = 5; data[4][1] = 1.5;

	scanf("%d %d", &x, &y);
	printf("Total: R$ %.2f\n", data[x - 1][1] * y);
    
    return 0;
}

