// https://www.urionlinejudge.com.br/judge/en/problems/view/1051

#include <stdio.h>

int main(int argc, char *argv[])
{
	float salary, taxes = 0;
	scanf("%f", &salary);

	if (salary <= 2000.00 && salary >= 0.00)
		{
			printf("Isento\n");
			return 0;
		}

	if (salary >= 2000.01 && salary <= 3000.00)
		printf("R$ %.2f\n", (salary - 2000) * 0.08);
	else
		{
			taxes = 1000 * 0.08;
			if (salary >= 3000.01 && salary <= 4500.00)
				printf("R$ %.2f\n", (salary - 3000) * 0.18 + taxes);
			else
				printf("R$ %.2f\n", 1500 * 0.18 + taxes + (salary - 4500) * 0.28);
		}
	    
    return 0;
}
