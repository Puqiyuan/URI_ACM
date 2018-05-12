// https://www.urionlinejudge.com.br/judge/en/problems/view/1094

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, tmpNum, rbtNum = 0, ratNum = 0, fogNum = 0, total = 0;
	char tmpType;
	
	scanf("%d", &n);
	while(n >= 1)
		{
			scanf("%d %c", &tmpNum, &tmpType);
			total += tmpNum;
			
			if (tmpType == 'C')
				rbtNum += tmpNum;

			else if (tmpType == 'R')
				ratNum += tmpNum;

			else if (tmpType == 'S')
				fogNum += tmpNum;

			n--;
		}
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", rbtNum);
	printf("Total de ratos: %d\n", ratNum);
	printf("Total de sapos: %d\n", fogNum);
	printf("Percentual de coelhos: %.2f %%\n", (rbtNum + 0.0) / total * 100);
	printf("Percentual de ratos: %.2f %%\n", (ratNum + 0.0) / total * 100);
	printf("Percentual de sapos: %.2f %%\n", (fogNum + 0.0 )/ total * 100);
	
    return 0;
}
