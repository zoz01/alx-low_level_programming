#include "holberton.h"
/**
 * string_toupper - tysd dfg dtry gfthy dyf
 * @s: tysd dfg dtry gfthy dyf
 * Return: vtysd dfg dtry gfthy dyf
 */
char *string_toupper(char *s)
{
int i = 0;

while (*(s + i) != '\0')
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
*(s + i) = *(s + i) - 32;
}
i++;
}
return (s);
}
