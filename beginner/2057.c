// https://www.urionlinejudge.com.br/judge/en/problems/view/2057

#include <stdio.h>

int main(int argc, char *argv[])
{
	int s, t, f, tmp;
	scanf("%d %d %d", &s, &t, &f);
	tmp = s + t + f;
	
	if (tmp < 0)
		tmp += 24;
	else if (tmp >= 24)
		tmp -= 24;

	printf("%d\n", tmp);
	
    return 0;
}

