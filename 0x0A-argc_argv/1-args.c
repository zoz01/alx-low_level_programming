#include <stdio.h>
#include "holberton.h"

/**
*main - number of arguments into main
*@argc: Number of command lines arguments
*@argv: the arr name
*Return: 0
*/

int main(int argc, char *argv[])
{
int i;
if (argc == 1)
printf("%d\n", argc - 1);
else
{
for (i = 0; *argv; i++, argv++)
										;

printf("%d\n", i - 1);
}
return (0);
}
