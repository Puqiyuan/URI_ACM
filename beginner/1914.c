// https://www.urionlinejudge.com.br/judge/en/problems/view/1914

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int n, in1, in2, spc1, spc2, spc3, len, i;
	char tmp[200], eat;
	scanf("%d", &n);

	while (n >= 1)
		{
			scanf("%c", &eat);
			scanf("%[^\n]s", tmp);
			scanf("%c", &eat);
			scanf("%d %d", &in1, &in2);

			len = strlen(tmp);

			for (i = 0; i < len; i++)
				{
					if (tmp[i] == ' ')
						{
							spc1 = i;
							break;
						}
				}
			
			for (i = spc1 + 1; i < len; i++)
				{
					if (tmp[i] == ' ')
						{
							spc2 = i;
							break;
						}
				}

			for (i = spc2 + 1; i < len; i++)
				{
					if (tmp[i] == ' ')
						{
							spc3 = i;
							break;
						}
				}

			if ((in1 + in2) % 2 == 0)
				{
					for (i = 0; i < spc1; i++)
						printf("%c", tmp[i]);
					printf("\n");
				}
			else
				{
					for (i = spc2 + 1; i < spc3; i++)
						printf("%c", tmp[i]);
					printf("\n");
				}
			
			n--;
		}
	
    return 0;
}
