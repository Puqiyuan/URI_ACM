// https://www.urionlinejudge.com.br/judge/en/problems/view/1985

#include <stdio.h>

int main(int argc, char *argv[])
{
	int tmpNum, tmpQt, num;
	float total = 0;
	scanf("%d", &num);

	while (num >= 1)
		{
			scanf("%d %d", &tmpNum, &tmpQt);
			if (tmpNum == 1001)
				total += tmpQt * 1.5;
			else if (tmpNum == 1002)
				total += tmpQt * 2.5;
			else if (tmpNum == 1003)
				total += tmpQt * 3.5;
			else if (tmpNum == 1004)
				total += tmpQt * 4.5;
			else
				total += tmpQt * 5.5;
			num--;
		}

	printf("%.2f\n", total);
	
    return 0;
}

