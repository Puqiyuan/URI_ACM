// https://www.urionlinejudge.com.br/judge/en/problems/view/1865

#include <stdio.h>

int main(int argc, char *argv[])
{
	char in[100], eat;
	int n, i;

	scanf("%d", &n);
	scanf("%c", &eat);

	while (n >= 1)
		{
			scanf("%[^\n]s", in);
			scanf("%c", &eat);
			
			if (in[0] == 'T' && in[1] == 'h' && in[2] == 'o' && in[3] == 'r')
				printf("Y\n");
			else
				printf("N\n");
			n--;
		}
	
    return 0;
}
