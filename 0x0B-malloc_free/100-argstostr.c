#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - example of explaination
*@ac:the num of args
*@av: args
* Return: the pointer to a new str
*/
char *argstostr(int ac, char **av)
{
	int n;
	int u;
	char *pt = NULL;
	int c;
	int ext;

	c = 0;
	ext = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
	{
		for (u = 0; av[n][u] != '\0'; u++)
		{
			ext++;
		}
	}

	pt = (char *)malloc(ext + ac + 1 * sizeof(char));
	if (pt == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
	{
		for (u = 0; av[n][u] != '\0'; u++)
		{
			pt[c] = av[n][u];
			c++;
		}
		pt[c] = '\n';
		c++;
	}
	pt[c] = '\0';
	return (pt);
}
