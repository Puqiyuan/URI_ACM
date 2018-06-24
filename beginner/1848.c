// https://www.urionlinejudge.com.br/judge/en/problems/view/1848

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int sum, count = 0;
	char tmpS[10], eat;
	static const char scream[] = "caw caw";

	while (count < 3)
		{
			sum = 0;
			scanf("%[^\n]s", tmpS); // https://www.quora.com/How-can-we-read-the-string-firstname-lastname-with-spaces-in-C-except-using-scanset-and-gets
			scanf("%c", &eat); // every time the input string is finished, the newline character is eaten after the string
			
			while (strcmp(tmpS, scream) != 0)
				{
					if (strcmp(tmpS, "---") == 0)
						sum += 0;
					else if (strcmp(tmpS, "--*") == 0)
						sum += 1;
					else if (strcmp(tmpS, "-*-") == 0)
						sum += 2;
					else if (strcmp(tmpS, "-**") == 0)
						sum += 3;
					else if (strcmp(tmpS, "*--") == 0)
						sum += 4;
					else if (strcmp(tmpS, "*-*") == 0)
						sum += 5;
					else if (strcmp(tmpS, "**-") == 0)
						sum += 6;
					else if (strcmp(tmpS, "***") == 0)
						sum += 7;
			
					scanf("%[^\n]s", tmpS);
					scanf("%c", &eat);
				}

			if (sum <= 1000)
				printf("%d\n", sum);
			else
				printf("%d\n", 1000);
			
			count++;
		}
		
    return 0;
}
