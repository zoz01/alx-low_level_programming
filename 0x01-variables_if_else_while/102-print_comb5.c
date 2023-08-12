#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entiry point
*Return:is always 0
*/
int main(void)
{
	int vv, cc;

	for (vv = 0; vv <= 98; vv++)
	{
		for (cc = vv + 1; cc <= 99; cc++)
		{
			putchar((vv / 10) + '0');
			putchar((vv % 10) + '0');
			putchar(' ');
			putchar((cc / 10) + '0');
			putchar((cc % 10) + '0');
			if (vv == 98 && cc == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
