// https://www.urionlinejudge.com.br/judge/en/problems/view/1095

#include <stdio.h>

int main(int argc, char *argv[])
{
	int x = 1, y = 60;
	
	while (y >= 0)
		{
			printf("I=%d J=%d\n", x, y);
			x += 3;
			y -= 5;
		}
	
    return 0;
}

