#include "holberton.h"
/**
 * _strcat - tysd dfg dtry gfthy dyf
 * @dest: tysd dfg dtry gfthy dyf
 * @src: tysd dfg dtry gfthy dyf
 * Return: tysd dfg dtry gfthy dyf
 */
char *_strcat(char *dest, char *src)
{
int lengthD, lengthS;

lengthD = 0;
lengthS = 0;

while (*(dest + lengthD) != '\0')
lengthD++;

while (*(src + lengthS) != '\0' && lengthD < 97)
{
*(dest + lengthD) = *(src + lengthS);
lengthD++;
lengthS++;
}
*(dest + lengthD) = '\0';
return (dest);
}
