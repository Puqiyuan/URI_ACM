// https://www.urionlinejudge.com.br/judge/en/problems/view/2147

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char input[10005];
	int test, len;

	scanf("%d", &test);

	while (test >= 1)
		{
			scanf("%s", &input);
			len = strlen(input);

			printf("%.2f\n", len / 100.0);
			test--;
		}
	
    return 0;
}
