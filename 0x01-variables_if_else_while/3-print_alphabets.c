#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entiry point
*Return:is always 0
*/
int main(void)
{
	char mych;
	for (mych = 'a'; mych <= 'z'; mych++)
	putchar(mych);
	for (mych = 'A'; mych <= 'Z'; mych++)
	putchar(mych);
	putchar('\n');
	return (0);
}
