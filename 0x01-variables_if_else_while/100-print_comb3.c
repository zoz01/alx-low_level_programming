#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entiry point
*Return:is always 0
*/
int main(void)
{
	int d1, d2;

	for (d1 = '0'; d1 < '9'; d1++)
	{
		for (d2 = d1 + 1; d2 <= '9'; d2++)
		{
			if (d2 != d1)
			{
				putchar(d1);
				putchar(d2);
				if (d1 == '8' && d2 == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
