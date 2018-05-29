// https://www.urionlinejudge.com.br/judge/en/problems/view/1154

#include <stdio.h>

int main(int argc, char *argv[])
{
	int age, sum = 0, count = 0;
	scanf("%d", &age);
	
	while (age >= 0)
		{
			sum += age;
			count++;
			scanf("%d", &age);
		}

	if (count >= 1)
		printf("%.2f\n", (sum + 0.0 )/ count);
			
    return 0;
}
