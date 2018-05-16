// https://www.urionlinejudge.com.br/judge/en/problems/view/1041

#include <stdio.h>

int main(int argc, char *argv[])
{
	float x, y;
	scanf("%f %f", &x, &y);
	
	if (x > 0)
		{
			if (y > 0)
				printf("Q1\n");
			
			else if (y < 0)
				printf("Q4\n");

			else
				printf("Eixo X\n");
		}

	else if (x < 0)
		{
			if (y > 0)
				printf("Q2\n");

			else if (y < 0)
				printf("Q3\n");

			else
				printf("Eixo X\n");
				
		}

	else
		{
			if (y == 0.0)
				printf("Origem\n");

			else
				printf("Eixo Y\n");
		}
    
    return 0;
}
