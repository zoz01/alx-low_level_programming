#include "main.h"

/**
 * _strpbrk -  kuh ishf flduigh hsg dfopj isfg
 * @s: kuh ishf flduigh hsg dfopj isfg
 * @accept: akuh ishf flduigh hsg dfopj isfg
 *
 * Return: kuh ishf flduigh hsg dfopj isfg
 */

char *_strpbrk(char *s, char *accept)
{
	char *t;
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		j = 0;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				t = (s + i);
				return (t);
			}

			j++;
		}

		i++;
	}

	return (0);
}
