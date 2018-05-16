// https://www.urionlinejudge.com.br/judge/en/problems/view/1015

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	double x1, y1, x2, y2;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("%.4f\n", sqrt( (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    
    return 0;
}

