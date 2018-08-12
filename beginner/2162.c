// https://www.urionlinejudge.com.br/judge/en/problems/view/2162

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);

	int data[n], i, diff, count = 0;

	for (i = 0; i <= n - 1; i++)
		scanf("%d", &data[i]);

	if (n == 2 && data[0] == data[1])
		{
			printf("0\n");
			return(0);
		}

	for (i = 0; i <= n - 2; i++)
		{
			diff = data[i+1] - data[i];
			count++;
			if (diff > 0)
				{
					if (data[i+2] - data[i+1] < 0)
						continue;
					else
						break;
				}
			else
				{
					if (data[i+2] - data[i+1] > 0)
						continue;
					else
						break;
				}
		}
	if (count == n - 1)
		printf("1\n");
	else
		printf("0\n");
	
    return 0;
}

