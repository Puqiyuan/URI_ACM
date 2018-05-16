// https://www.urionlinejudge.com.br/judge/en/problems/view/1061

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char data[14][3];
	int i, d1, h1, m1, s1, d2, h2, m2, s2, d_t, h_t, m_t, s_t;
	
	for (i = 0; i <= 13; i++)
		scanf("%s", data[i]);

	d1 = atoi(data[1]); d2 = atoi(data[8]);
	h1 = atoi(data[2]); h2 = atoi(data[9]);
	m1 = atoi(data[4]); m2 = atoi(data[11]);
	s1 = atoi(data[6]); s2 = atoi(data[13]);

	d_t = d2 - d1;

	if (h2 < h1)
		{
			h_t = h2 + 24 - h1;
			d_t--;
		}
	else
		h_t = h2 - h1;

	if (m2 < m1)
		{
			m_t = m2 + 60 - m1;
			h_t--;
		}
	else
		m_t = m2 - m1;

	if (s2 < s1)
		{
			s_t = s2 + 60 - s1;
			m_t--;
		}
	else
		s_t = s2 - s1;

	printf("%d dia(s)\n", d_t);
	printf("%d hora(s)\n", h_t);
	printf("%d minuto(s)\n", m_t);
	printf("%d segundo(s)\n", s_t);
    
    return 0;
}

