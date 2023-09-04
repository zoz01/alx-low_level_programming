#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*create_array - the entry point
*@size: size f arr
*@c:the  char
*Return: either pointer for the array, NULL at failing
*/
char *create_array(unsigned int size, char c)
{
char *arr = NULL;
unsigned int i;

	if (size == 0)
	return (NULL);
	if (size != 0)
	{
		arr = (char *)malloc(size * sizeof(char));
		if (arr != NULL)
		{
			for (i = 0; i < size; i++)
				arr[i] = c;
		}
	}
	return (arr);
}
