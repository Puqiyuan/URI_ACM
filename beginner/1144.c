// https://www.urionlinejudge.com.br/judge/en/problems/view/1144

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i = 2;
	scanf("%d", &n);

	printf("1 1 1\n");
	printf("1 2 2\n");

	while (n >= 2)
		{
			printf("%d %d %d\n", i, i * i, i * i * i);
			printf("%d %d %d\n", i, i * i + 1, i * i * i + 1);
			i++;
			n--;
		}
	
    return 0;
}

