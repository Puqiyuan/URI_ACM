// https://www.urionlinejudge.com.br/judge/en/problems/view/1074

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, tmp;
	scanf("%d", &n);

	while (n >= 1)
		{
			scanf("%d", &tmp);
			if (tmp % 2 == 0 && tmp != 0)
				printf("EVEN ");
			else if (tmp % 2 != 0)
				printf("ODD ");

			if (tmp > 0)
				printf("POSITIVE\n");
			else if (tmp < 0)
				printf("NEGATIVE\n");

			if (tmp == 0)
				printf("NULL\n");

			n--;
		}
	
    return 0;
}
