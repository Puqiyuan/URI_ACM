// https://www.urionlinejudge.com.br/judge/en/problems/view/1858

#include <stdio.h>

int main(int argc, char *argv[])
{
	int tot, pos, min = 21, i;
	scanf("%d", &tot);
	int times[tot];

	for (i = 0; i <= tot - 1; i++)
		scanf("%d", &times[i]);

	for (i = 0; i <= tot - 1; i++)
		{
			if (min > times[i])
				{
					pos = i;
					min = times[i];
				}
		}
	printf("%d\n", pos + 1);
	
    return 0;
}
