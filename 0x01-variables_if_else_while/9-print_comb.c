#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entiry point
*Return:is always 0
*/
int main(void)
{
	int vv;

	for (vv = '0'; vv <= '9'; vv++)
{
	putchar(vv);
	if (vv != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');
	return (0);
}
