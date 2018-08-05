// https://www.urionlinejudge.com.br/judge/en/problems/view/2139

#include <stdio.h>

int main(int argc, char *argv[])
{
	int days[30] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
	int month, day, i, leave;

	while (scanf("%d %d", &month, &day) != EOF)
		{
			if (month == 12)
				{
					if (day > 25)
						printf("Ja passou!\n");
					else if (day == 25)
						printf("E natal!\n");
					else if (day == 24)
						printf("E vespera de natal!\n");
					else 
						printf("Faltam %d dias para o natal!\n", 25 - day);
				}
			else
				{
					
					leave = days[month - 1] - day;
					for (i = month + 1; i <= 12; i++)
						leave += days[i - 1];
					printf("Faltam %d dias para o natal!\n", leave);
				}
			
		}
	
    return 0;
}

