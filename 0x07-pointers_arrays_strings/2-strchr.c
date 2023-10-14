#include "main.h"

/**
 * _strchr - Returns kuh ishf flduigh hsg dfopj isfg
 *
 * @s: kuh ishf flduigh hsg dfopj isfgstring passed
 * @c: ckuh ishf flduigh hsg dfopj isfg
 *
 * Return: kuh ishf flduigh hsg dfopj isfg
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
