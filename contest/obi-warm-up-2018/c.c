// https://www.urionlinejudge.com.br/judge/en/challenges/view/369/3

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char meta[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
					 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
					 'w', 'x', 'y', 'z'};
	
	char map[26][26], key[50], eat, text[100002];
	int i, j, k, n, lenText, lenKey, space = -1, start;

	for (i = 0; i <= 25; i++)
		{
			k = 0;
			for (j = i; j <= 25; j++)
				{
					map[i][k] = meta[j];
					k++;
				}
			if (i >= 1)
				{
					for (j = 0; j <= i - 1; j++)
						{
							map[i][k] = meta[j];
							k++;
						}
				}
		}

	scanf("%s", &key);
	scanf("%c", &eat);
	lenKey = strlen(key);
	scanf("%d", &n);
	scanf("%c", &eat);

	while (n >= 1)
		{
			scanf("%[^\n]s", &text);
			scanf("%c", &eat);
			lenText = strlen(text);
			char ref[lenText];
			
			k = 0, i = 0;
			space = -1, start;
			while (k <= lenText - 1)
				{
					k = space + 1;
					start = space + 1;
					while (text[k] != ' ' && k <= lenText - 1)
						{
							k++;
							continue;
						}
					space = k;
					ref[space] = ' ';
					if (text[start] != 'a' && text[start] != 'e' && text[start] != 'i' &&
						text[start] != 'o' && text[start] != 'u')
						{
							for (j = start; j <= space - 1; j++)
								{
									ref[j] = key[i];
									i++;
									if (i == lenKey)
										i = 0;
								}
						}
					else
						{
							for (j = start; j <= space - 1; j++)
								ref[j] = ' ';
						}

				}
			
			k = 0;
			space = -1, start;
			while(k <= lenText - 1)
				{
					k = space + 1;
					start = space + 1;
					while (text[k] != ' ' && k <= lenText - 1)
						{
							k++;
							continue;
						}
					space = k;

					if (text[start] != 'a' && text[start] != 'e' && text[start] != 'i' &&
						text[start] != 'o' && text[start] != 'u')
						{
							for (j = start; j <= space - 1; j++)
								printf("%c", map[(int)(ref[j] - 97)][(int)(text[j] - 97)]);
						}
					else
						{
							for (j = start; j <= space - 1; j++)
								printf("%c", text[j]);
						}
					printf(" ");
				}
		
			printf("\n");
			n--;
		}

    return 0;
}

