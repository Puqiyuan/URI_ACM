// https://www.urionlinejudge.com.br/judge/en/problems/view/2176

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char s[150];
	scanf("%s",&s);

	int len = strlen(s), count = 0, i;

	for (i = 0; i <= len - 1; i++)
		{
			if (s[i] == '1')
				count++;
		}
	if (count % 2 != 0)
		s[len] = '1';
	else
		s[len] = '0';

	s[i+1] = '\0';

	printf("%s\n", s);
	
    return 0;
}
