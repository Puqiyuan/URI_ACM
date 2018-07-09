// https://www.urionlinejudge.com.br/judge/en/problems/view/1958

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char chunk[120], sign;
	int dot = -1, no_zero = -1, i, j, len, tmp, expo;
	char* mantissa = (malloc(sizeof(char) * 7));

	scanf("%s", &chunk);
	len = strlen(chunk);

	for (i = 0; i <= len - 1; i++)
		{
			if (chunk[i] == '.')
				dot = i;
			
			if (chunk[i] != '0' && chunk[i] != '.' && chunk[i] != '-' && no_zero == -1)
				no_zero = i;

			if (no_zero != -1 && dot != -1)
				break;
		}
	if (dot == -1)
		dot = len;
	
	j = 1;
	for (i = no_zero; i <= len - 1, j <= 6; i++)
		{
			if (chunk[i] != '.')
				{
					mantissa[j] = chunk[i];
					j++;
				}
		}
	mantissa[0] = '0';
	i = strlen(mantissa);
	if (i < 7)
		{
			for (; i <= 6; i++)
				mantissa[i] = '0';
		}
	
	if (mantissa[6] >= '5')
		{
			tmp = (int)(mantissa[5] - 48) + 1;
			if (tmp >= 10)
				mantissa[5] = '0';
				
			else
				mantissa[5] = (char)(tmp + 48);
			
			for (i = 4; i >= 0; i--)
				{
					if (tmp >= 10)
						{
							tmp = (int)(mantissa[i] - 48) + 1;
							if (tmp >= 10)
								mantissa[i] = '0';
							else
								mantissa[i] = (char)(tmp + 48);
						}
				}
		}

	if (chunk[0] == '-')
		printf("-");
	else
		printf("+");

	if (strcmp(chunk, "0") == 0)
		printf("0.0000E+00\n");

	else if (strcmp(chunk, "-0") == 0)
		printf("0.0000E+00\n");
	
	else
		{

			if (no_zero > dot)
				{
					sign = '-';
					expo = no_zero - dot;
				}
			else
				{
					sign = '+';
					expo = dot - no_zero - 1;
				}
	
			if (mantissa[0] == '1')
				{
					expo += 1;
					printf("1.0000E%c", sign);
				}
			else
				printf("%c.%c%c%c%cE%c", mantissa[1], mantissa[2], mantissa[3], mantissa[4], mantissa[5], sign);

			if (expo <= 9)
				printf("0%d\n", expo);
			else
				printf("%d\n", expo);
		}
			
    return 0;
}
