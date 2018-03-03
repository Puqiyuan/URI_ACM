// https://www.urionlinejudge.com.br/judge/en/problems/view/1040

#include <stdio.h>

int main(int argc, char *argv[])
{
	float n1, n2, n3, n4, media, more;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

	media = n1 * 0.2 + n2 * 0.3 + n3 * 0.4 + n4 * 0.1;

	printf("Media: %.1f\n", media);

	if (media >= 7.0)
		printf("Aluno aprovado.\n");
	
	else if (media < 5.0)
		printf("Aluno reprovado.\n");

	else if (media >= 5.0 && media <= 6.9)
		{
			printf("Aluno em exame.\n");
			scanf("%f", &more);
			printf("Nota do exame: %.1f\n", more);
			media = (media + more) / 2;

			if (media >= 5.0)
				printf("Aluno aprovado.\n");

			else if (media <= 4.9)
				printf("Aluno reprovado.\n");

			printf("Media final: %.1f\n", media);
		}
	
    return 0;
}
