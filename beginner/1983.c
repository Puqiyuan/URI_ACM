// https://www.urionlinejudge.com.br/judge/en/problems/view/1983

#include <stdio.h>

typedef struct
{
	int num;
	float note;
}info;

int main(int argc, char *argv[])
{
	int n, i;
	scanf("%d", &n);
	info std[n], tmp;
	tmp.note = -1;
	
	for (i = 0; i <= n - 1; i++)
		scanf("%d %f", &std[i].num, &std[i].note);

	for (i = 0; i <= n - 1; i++)
		{
			if (std[i].note > tmp.note)
				tmp = std[i];
		}

	if (tmp.note < 8)
		printf("Minimum note not reached\n");
	else
		printf("%d\n", tmp.num);
	
    return 0;
}
