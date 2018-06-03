// https://www.urionlinejudge.com.br/judge/en/problems/view/1174

#include <stdio.h>

int main(int argc, char *argv[])
{
	double a[100];
	int i;

	for (i = 0; i <= 99; i++)
		scanf("%lf", &a[i]);

	for (i = 0; i <= 99; i++)
		{
			if (a[i] <= 10)
				printf("A[%d] = %.1f\n", i, a[i]);
		}
	
    return 0;
}
