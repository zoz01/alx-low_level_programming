#include "main.h"
/**
 * _strncpy - tysd dfg dtry gfthy dyf
 * @dest: tysd dfg dtry gfthy dyf
 * @src: tysd dfg dtry gfthy dyf
 * @n: tysd dfg dtry gfthy dyf
 * Return: tysd dfg dtry gfthy dyf
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
*(dest + i) = *(src + i);
for ( ; i < n; i++)
*(dest + i) = '\0';
return (dest);
}
