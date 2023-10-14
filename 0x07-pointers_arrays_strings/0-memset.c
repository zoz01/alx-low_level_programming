#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * @s: rth gtrrt memory area
 * @b: fdfdert byte
 * @n: number of
 * Return: s nter
 */

char *_memset(char *s, char b, unsigned int n)
{
	if (n > 0)
	{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			*(s + i) = b;
		}
	}

	return (s);
}
