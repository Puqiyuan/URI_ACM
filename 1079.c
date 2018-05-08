// https://www.urionlinejudge.com.br/judge/en/problems/view/1079

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i;
	float tmp1, tmp2, tmp3;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
		{
			scanf("%f %f %f", &tmp1, &tmp2, &tmp3);
			printf("%.1f\n", .2 * tmp1 + .3 * tmp2 + .5 * tmp3);
		}
	    
    return 0;
}
