// https://www.urionlinejudge.com.br/judge/en/problems/view/1014

#include <stdio.h>

int main(int argc, char *argv[])
{
	int x;
	float y;
	scanf("%d %f", &x, &y);
	printf("%.3f km/l\n", x / y);
    
    return 0;
}

