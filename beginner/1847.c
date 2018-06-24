// https://www.urionlinejudge.com.br/judge/en/problems/view/1847

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, diff1, diff2;
	scanf("%d %d %d", &a, &b, &c);
	diff1 = b - a;
	diff2 = c - b;

	if (diff1 < 0)
		{
			if (diff2 > 0 || diff2 == 0)
				printf(":)\n");
			else if (diff2 < 0 && (-diff1) > (-diff2))
				printf(":)\n");
			else if (diff2 < 0 && (-diff1) <= (-diff2))
				printf(":(\n");
		}
	else if (diff1 > 0)
		{
			if (diff2 < 0 || diff2 == 0)
				printf(":(\n");
			else if (diff2 > 0 && diff2 < diff1)
				printf(":(\n");
			else if (diff2 > 0 && diff2 >= diff1)
				printf(":)\n");
		}
	else
		{
			if (diff2 > 0)
				printf(":)\n");
			else
				printf(":(\n");
		}
	
    return 0;
}
