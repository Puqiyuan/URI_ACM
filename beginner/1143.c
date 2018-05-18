// https://www.urionlinejudge.com.br/judge/en/problems/view/1143

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i = 2;
	scanf("%d", &n);
	printf("1 1 1\n");

	while(n > 1)
		{
			printf("%d %d %d\n", i, i * i, i * i * i);
			i++;
			n--;
		}
	
    return 0;
}

