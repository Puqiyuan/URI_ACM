// https://www.urionlinejudge.com.br/judge/en/problems/view/1173

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n[10], i, v;
	scanf("%d", &v);

	for (i = 0; i <= 9; i++)
		n[i] = v * pow(2, i);

	for (i = 0; i <= 9; i++)
		printf("N[%d] = %d\n", i, n[i]);
	
    return 0;
}

