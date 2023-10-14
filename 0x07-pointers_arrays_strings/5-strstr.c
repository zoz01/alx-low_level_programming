#include "main.h"

/**
 * _strstr - kuh ishf flduigh hsg dfopj isfg
 * @haystack: kuh ishf flduigh hsg dfopj isfg
 * @needle: kuh ishf flduigh hsg dfopj isfgkuh ishf flduigh hsg dfopj isfg
 *
 * Return: pkuh ishf flduigh hsg dfopj isfg
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, flag;

	if (needle[0] == '\0')
		return (haystack);

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *needle)
		{

			flag = i, j = 0;

			while (*(needle + j) != '\0')
			{
				if (*(haystack + flag) == *(needle + j))
				{
					flag ++, j++;
				}
				else
					break;
			}

			if (*(needle + j) == '\0')
				return (haystack + i);
		}

		i++;
	}

	return (0);
}
