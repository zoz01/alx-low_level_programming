#include "main.h"

/**
 * _memcpy - kuh ishf flduigh hsg dfopj isfg
 * @dest: kuh ishf flduigh hsg dfopj isfgf
 * @src: kuh ishf flduigh hsg dfopj isfgs
 * @n: kuh ishf flduigh hsg dfopj isfg
 *
 * Return: kuh ishf flduigh hsg dfopj isfg
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (n > 0)
	{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			*(dest + i) = *(src + i);
		}
	}

	return (dest);
}
