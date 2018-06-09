// https://www.urionlinejudge.com.br/judge/en/problems/view/1789

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, max, level, max_level, i;

	while(scanf("%d", &n) != EOF)
		{
			int data[n];
			for (i = 0; i <= n - 1; i++)
				scanf("%d", &data[i]);

			max_level = -1;
			for (i = 0; i <= n - 1; i++)
				{
					if (data[i] < 10)
						{
							level = 1;
							if (max_level < level)
								max_level = level;
						}
					else if (data[i] >= 10 && data[i] < 20)
						{
							level = 2;
							if (max_level < level)
								max_level = level;
						}
					else
						max_level = 3;
				}
			printf("%d\n", max_level);
		}
		
    return 0;
}
