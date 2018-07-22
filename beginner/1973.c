// https://www.urionlinejudge.com.br/judge/en/problems/view/1973

#include <stdio.h>

int main(int argc, char *argv[])
{
	long long int num, i, lost = 0, total = 0, flag = 1, atk = 0;
	scanf("%lld", &num);
	long long int stars[num], flags[num];

	for (i = 0; i <= num - 1; i++)
		{
			flags[i] = 1;
			scanf("%lld", &stars[i]);
			total += stars[i];
		}

	i = 0;
	while (flag)
		{
			if (stars[i] >= 1)
				{
					lost++;
					stars[i]--;

					flags[i] = 0;
				}

			if ((stars[i] + 1) % 2 != 0)
				i++;
			else
				i--;


			if (i <= 0 || i >= num)
				flag = 0;
		}

	if (i == 0 && stars[i] >= 1)
		lost++;

	for (i = 0; i <= num - 1; i++)
		{
			if (flags[i] == 0)
				atk++;
		}

	printf("%lld %lld\n", atk, total - lost);
			
    return 0;
}
