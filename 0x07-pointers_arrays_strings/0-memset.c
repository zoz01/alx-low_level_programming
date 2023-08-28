nclude "holberton.h"
/**
 ** _memset - fills memory with constant byte
 **@s: st value
 **@b: d value
 **@n:  value
 ** Return: char with result of memset
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
					{
								s[i] = b;
									}
				return (s);
}
