#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entiry point
*Return:is always 0
*/
int main(void)
{
	int d, d1, d2;

	for (d = '0'; d < '9'; d++)
	{
		for (d1 = d + 1; d1 <= '9'; d1++)
		{
			for (d2 = d1 + 1; d2 <= '9'; d2++)
			{
				if ((d1 != d) != d2)
				{
					putchar(d);
					putchar(d1);
					putchar(d2);
					if (d == '7' && d1 == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
