// https://www.urionlinejudge.com.br/judge/en/problems/view/1156

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 1, b = 1, i;
	float sum = 0, x;
	
	for (i = 1; i <= 20; i++)
		{
			x = (a + 0.0 ) / b;
			sum += x;
			a += 2;
			b *= 2;
		}

	printf("%.2f\n", sum);
	
    return 0;
}
