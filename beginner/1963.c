// https://www.urionlinejudge.com.br/judge/en/problems/view/1963

#include <stdio.h>

int main(int argc, char *argv[])
{
	double old, new;
	scanf("%lf %lf", &old, &new);
	printf("%.2lf%\n", (new-old) / old * 100.0);
	
    return 0;
}
