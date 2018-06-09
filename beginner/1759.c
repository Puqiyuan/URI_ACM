// https://www.urionlinejudge.com.br/judge/en/problems/view/1759

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);

	while (n >= 2)
		{
			printf("Ho ");
			n--;
		}

	if (n >= 1)
		printf("Ho!\n");
	
    return 0;
}

