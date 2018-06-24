// https://www.urionlinejudge.com.br/judge/en/problems/view/1864

#include <stdio.h>

int main(int argc, char *argv[])
{
	static const char data[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

	int n, i;
	scanf("%d", &n);

	for (i = 0; i <= n - 1; i++)
		printf("%c", data[i]);

	printf("\n");
	
    return 0;
}
