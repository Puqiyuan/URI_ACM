// https://www.urionlinejudge.com.br/judge/en/problems/view/1080
// https://www.tutorialspoint.com/c_standard_library/limits_h.htm

#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
	int tmp, i, max = INT_MIN, pos = 1;

	for (i = 1; i <= 100; i++)
		{
			scanf("%d", &tmp);
			if (tmp > max)
				{
					max = tmp;
					pos = i;
				}
		}
	printf("%d\n%d\n", max, pos);
	
    return 0;
}
