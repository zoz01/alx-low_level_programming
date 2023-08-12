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

	for (mych = 'z'; mych >= 'a'; mych--)
	putchar(mych);

	putchar('\n');

	return (0);
}
