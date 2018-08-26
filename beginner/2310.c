// https://www.urionlinejudge.com.br/judge/en/problems/view/2310

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, tmpSer, tmpBlk, tmpAtk, totSer = 0, totBlk = 0, totAtk = 0;
	int tmpScsSer, tmpScsBlk, tmpScsAtk, totScsSer = 0, totScsBlk = 0, totScsAtk = 0;
	char tmpName[100];

	scanf("%d", &n);

	while (n >= 1)
		{
			scanf("%s", &tmpName);
			scanf("%d %d %d", &tmpSer, &tmpBlk, &tmpAtk);
			totSer += tmpSer;
			totBlk += tmpBlk;
			totAtk += tmpAtk;
			scanf("%d %d %d", &tmpScsSer, &tmpScsBlk, &tmpScsAtk);
			totScsSer += tmpScsSer;
			totScsBlk += tmpScsBlk;
			totScsAtk += tmpScsAtk;
			n--;
		}
	
	printf("Pontos de Saque: %.2f %%.\n", (totScsSer + 0.0) / totSer * 100);
	printf("Pontos de Bloqueio: %.2f %%.\n", (totScsBlk + 0.0) / totBlk * 100);
	printf("Pontos de Ataque: %.2f %%.\n", (totScsAtk + 0.0) / totAtk * 100);
	
    return 0;
}

