#include <stdio.h>

int main(int argc, char *argv[])
{
	char tmp[102], eat;
	int n;
	
	scanf("%d", &n);
	while (n >= 1)
		{
			scanf("%c", &eat);
			scanf("%[^\n]s", tmp);
			n--;
		}

	printf("Ciencia da Computacao\n");
	
    return 0;
}
