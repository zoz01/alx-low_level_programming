nclude "holberton.h"
/**
 ** _memset - fills memory with constant byte
 **@s: st value
 **@b: d value
 **@n:  value
 ** Return: char with result of memset
 **/
char *_memset(char *k, char v, unsigned int a)
{
	unsigned int i;
	
	for (i = 0; i < a; i++)
					{
								k[i] = v;
									}
				return (k);
}
