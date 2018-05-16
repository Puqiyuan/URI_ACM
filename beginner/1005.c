// https://www.urionlinejudge.com.br/judge/en/problems/view/1005

#include <stdio.h>
int main(int argc, char *argv[])
{
	float a, b;
	scanf("%f %f", &a, &b);
	printf("MEDIA = %.5f\n", (a * (0.35 / 11.0) + b * (0.75 / 11.0)) * 10);
    
    return 0;
}

