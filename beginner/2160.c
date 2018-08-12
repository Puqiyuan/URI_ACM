// https://www.urionlinejudge.com.br/judge/en/problems/view/2160

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char in[505];

	scanf("%[^\n]s", &in);

	if (strlen(in) <= 80)
		printf("YES\n");
	else
		printf("NO\n");
	
    return 0;
}

