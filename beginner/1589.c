// https://www.urionlinejudge.com.br/judge/en/problems/view/1589

#include <stdio.h>

int main(int argc, char *argv[])
{
	int t, r1, r2;
	scanf("%d", &t);

	while (t >= 1)
		{
			scanf("%d %d", &r1, &r2);
			printf("%d\n", r1 + r2);
			t--;
		}
	
    return 0;
}

