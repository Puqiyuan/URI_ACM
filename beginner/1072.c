// https://www.urionlinejudge.com.br/judge/en/problems/view/1072

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, in = 0, out = 0, tmp;
	scanf("%d", &n);

	while (n > 0)
		{
			scanf("%d", &tmp);
			
			if (tmp >= 10 && tmp <= 20)
				in++;
			else
				out++;
			--n;
		}
	printf("%d in\n", in);
	printf("%d out\n", out);
	
    return 0;
}
