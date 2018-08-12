// https://www.urionlinejudge.com.br/judge/en/problems/view/2165

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char in[505];
	scanf("%[^\n]s", &in);

	if (strlen(in) <= 140)
		printf("TWEET\n");
	else
		printf("MUTE\n");
	
    return 0;
}

