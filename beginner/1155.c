// https://www.urionlinejudge.com.br/judge/en/problems/view/1155

#include <stdio.h>

int main(int argc, char *argv[])
{
	float s = 1;
	int i;

	for (i = 2; i <= 100; i++)
		s += 1.0 / i;

	printf("%.2f\n", s);
    return 0;
}
