#include "main.h"

/**
*string_nconcat - this fuc def does somthin
*@s1: 1st str
*@s2: 2nd str
*@n: max bytes s2 to s1
*Return: fail - NULL.
*Otherwise - pointer to space
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int loo = m, indax;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (indax = 0; s1[indax]; indax++)
		loo++;

	concat = malloc(sizeof(char) * (loo + 1));

	if (concat == NULL)
		return (NULL);

	loo = 0;

	for (indax = 0; s1[indax]; indax++)
		concat[loo++] = s1[indax];

	for (indax = 0; s2[indax] && indax < m; indax++)
		concat[loo++] = s2[indax];

	concat[loo] = '\0';

	return (concat);
}
