// https://www.urionlinejudge.com.br/judge/en/problems/view/1957

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int n, i = 0, bits[100], j, r, tmp, stop, a, b, c, d, data = 0;
	char Map[2][2][2][2];
	scanf("%d", &n);

	while (n >= 1)
		{
			bits[i] = n % 2;
			n = n / 2;
			i++;
		}

	r = 4 - i % 4;

	if (i % 2 != 0)
		stop = i / 2;
	else
		stop = i / 2 - 1;
	
	for (j = 0; j <= stop; j++)
		{
			tmp = bits[j];
			bits[j] = bits[i-1-j];
			bits[i-1-j] = tmp;
		}

	if (r != 4)
		{
			for (j = i - 1; j >= 0; j--)
				bits[j + r] = bits[j];
	
			for (j = 0; j <= r - 1; j++)
				bits[j] = 0;
		}

	for (a = 0; a <= 1; a++)
		{
			for (b = 0; b <= 1; b++)
				{
					for (c = 0; c <= 1; c++)
						{
							for (d = 0; d <= 1; d++)
								{
									if (data <= 9)
										{
											Map[a][b][c][d] = (char)(data + 48);
											data++;
											continue;
										}

									if (data == 10)
										data = 65;
									Map[a][b][c][d] = (char)data;
									data++;
								}
						}
				}
		}

	if (r != 4)
		stop = i + r;
	else
		stop = i;

	for (j = 0; j <= stop - 1; j += 4)
		printf("%c", Map[bits[j]][bits[j+1]][bits[j+2]][bits[j+3]]);
		
	printf("\n");
	
	return 0;
}
