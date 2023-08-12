#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entiry point
*Return:is always 0
*/
int main(void)
{
	int down;
	char lower;

	for (down = '0'; down <= '9'; down++)
	putchar(down);
	for (lower = 'a'; lower <= 'f'; lower++)
	putchar(lower);
	putchar('\n');
	return (0);
}
