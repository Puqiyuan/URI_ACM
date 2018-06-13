// https://www.urionlinejudge.com.br/judge/en/problems/view/1828

#include <stdio.h>
#include <string.h>

int numbering(char *s)
{
	if (strcmp(s, "pedra") == 0)
		return 0;
	if (strcmp(s, "papel") == 0)
		return 1;
	if (strcmp(s, "tesoura") == 0)
		return 2;
	if (strcmp(s, "lagarto") == 0)
		return 3;
	
	return 4;
}

int main(int argc, char *argv[])
{
	char opt1[8], opt2[8];
	int n, bkn, magic[5][5], i, j;

	magic[0][0] = 0; magic[0][1] = -1; magic[0][2] = 1; magic[0][3] = 1; magic[0][4] = -1;
	magic[1][0] = 1; magic[1][1] = 0;  magic[1][2] = -1; magic[1][3] = -1; magic[1][4] = 1;
	magic[2][0] = -1; magic[2][1] = 1; magic[2][2] = 0; magic[2][3] = 1; magic[2][4] = -1;
	magic[3][0] = -1; magic[3][1] = 1; magic[3][2] = -1; magic[3][3] = 0; magic[3][4] = 1;
	magic[4][0] = 1; magic[4][1] = -1; magic[4][2] = 1; magic[4][3] = -1; magic[4][4] = 0;
	
	scanf("%d", &n);
	bkn = n;

	while(n >= 1)
		{
			scanf("%s %s", opt1, opt2);

			i = numbering(opt1);
			j = numbering(opt2);

			if (magic[i][j] == 1)
				printf("Caso #%d: Bazinga!\n", bkn + 1 - n);
			else if(magic[i][j] == 0)
				printf("Caso #%d: De novo!\n", bkn + 1 - n);
			else
				printf("Caso #%d: Raj trapaceou!\n", bkn + 1 - n);

			n--;
		}
			
    return 0;
}
