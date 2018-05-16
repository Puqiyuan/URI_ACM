// https://www.urionlinejudge.com.br/judge/en/problems/view/1017

#include <stdio.h>

int main(int argc, char *argv[])
{
	int time, ave;
	scanf("%d %d", &time, &ave);
	printf("%.3f\n", time * ave / 12.0);
    
    return 0;
}

