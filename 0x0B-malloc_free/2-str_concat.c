#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - the ntry
*@s1: str 1
*@s2: str 2
* Return: point tothe newly allocated memory or NULL -the pointer ill do this-
*/
char *str_concat(char *s1, char *s2)
{
	char *strn = NULL;
	unsigned int i;
	int n1;
	int n2;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	strn = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (strn == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		strn[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		strn[i] = s2[count];
		count++;
	}
	return (strn);
}
