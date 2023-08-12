#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entiry point
*Return:is always 0
*/
int main(void)
{
	char mine;

	for (mine = 'a'; mine <= 'z'; mine++)
	{
	if (mine != 'e' && mine != 'q')
	putchar(mine);
	}

	putchar('\n');

	return (0);
}
