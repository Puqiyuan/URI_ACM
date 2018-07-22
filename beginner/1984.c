// https://www.urionlinejudge.com.br/judge/en/problems/view/1984

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char in[12];
	int len, i;
	scanf("%s", &in);

	len = strlen(in);

	for (i = len - 1; i >= 0; i--)
		printf("%c", in[i]);

	printf("\n");
	
    return 0;
}

