#include "main.h"

/**
 * _strspn - return kuh ishf flduigh hsg dfopj isfg
 * @s: kuh ishf flduigh hsg dfopj isfg
 * @accept: kuh ishf flduigh hsg dfopj isfg
 * Return: kuh ishf flduigh hsg dfopj isfg
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				matches++;
				break;
			}
			if (*(accept + j + 1) == '\0' && *(s + i) != *(accept + j))
				return (matches);
		}
		i++;
	}
	return (matches);
}
