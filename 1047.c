// https://www.urionlinejudge.com.br/judge/en/problems/view/1047

#include <stdio.h>
int main(int argc, char *argv[])
{
	int start_h, start_m, end_h, end_m, h_d, m_d;
	scanf("%d %d %d %d", &start_h, &start_m, &end_h, &end_m);

	if (start_h >= end_h)
		h_d = end_h + 24 - start_h;
	else
		h_d = end_h - start_h;

	if (end_m < start_m)
		{
			m_d = 60 + end_m - start_m;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h_d - 1, m_d);
		}
	else
		{
			m_d = end_m - start_m;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h_d, m_d);
		}
	    
    return 0;
}
