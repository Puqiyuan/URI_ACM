// https://www.urionlinejudge.com.br/judge/en/problems/view/2161

#include <stdio.h>

int main(int argc, char *argv[])
{
	double n, fra = 0.0;
    scanf("%lf", &n);
    while(n--)
		{
			fra += 6.0;
			fra = 1.0/fra;
		}
    fra += 3.0;
    printf("%.10lf\n", fra);
		
    return 0;
}

