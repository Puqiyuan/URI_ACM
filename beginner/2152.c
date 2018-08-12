// https://www.urionlinejudge.com.br/judge/en/problems/view/2152

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, h, m, o;
	scanf("%d", &n);

	while (n >= 1)
		{
			scanf("%d %d %d", &h, &m, &o);

			if (h >= 0 && h <= 9)
				printf("0%d:", h);

			else
				printf("%d:", h);

			if (m >= 0 && m <= 9)
				printf("0%d - ", m);
			else
				printf("%d - ", m);

			if (o == 0)
				printf("A porta fechou!\n");
			else
				printf("A porta abriu!\n");
			n--;
		}
	
    return 0;
}

