#include "holberton.h"
/**
 * _strncat - tysd dfg dtry gfthy dyf
 * @dest: tysd dfg dtry gfthy dyf
 * @src: tysd dfg dtry gfthy dyf
 * @n: tysd dfg dtry gfthy dyf
 * Return: tysd dfg dtry gfthy dyf
 */
char *_strncat(char *dest, char *src, int n)
{
int lengthD, lengthS;

lengthD = 0;
lengthS = 0;

while (*(dest + lengthD) != '\0')
lengthD++;

while (*(src + lengthS) != '\0' && lengthD < 97 && lengthS < n)
{
*(dest + lengthD) = *(src + lengthS);
lengthD++;
lengthS++;
}
*(dest + lengthD) = '\0';
return (dest);
}
