// https://www.urionlinejudge.com.br/judge/en/problems/view/1098

#include <stdio.h>

int main(int argc, char *argv[])
{
	float i = 0;

	while (i <= 2)
		{
			if ( (i - (int)i) != 0)
				{
					printf("I=%.1f J=%.1f\n", i, i + 1);
					printf("I=%.1f J=%.1f\n", i, i + 2);
					printf("I=%.1f J=%.1f\n", i, i + 3);
				}
			else
				{
					printf("I=%.0f J=%.0f\n", i, i + 1);
					printf("I=%.0f J=%.0f\n", i, i + 2);
					printf("I=%.0f J=%.0f\n", i, i + 3);
				}
			i += 0.2;
		}
	printf("I=%d J=%d\n", 2, 2 + 1);
	printf("I=%d J=%d\n", 2, 2 + 2);
	printf("I=%d J=%d\n", 2, 2 + 3);
	
    return 0;
}
