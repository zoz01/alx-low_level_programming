#include "holberton.h"
/**
 * _strcmp - tysd dfg dtry gfthy dyf
 * @s1: tysd dfg dtry gfthy dyf
 * @s2: tysd dfg dtry gfthy dyf
 * Return: tysd dfg dtry gfthy dyf
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
