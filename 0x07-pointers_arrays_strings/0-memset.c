
#include <unistd.h>
#include "holberton.h"

/**
 *  * _memset - fills memory with a constant byte
 *   * @s: pointer to the memory area
 *    * @b: the constant byte to fill the memory with
 *     * @n: the number of bytes to fill
 *      * Return: a pointer to the filled memory area
 *       **/
char *_memset(char *s, char b, unsigned int n)
{
	    unsigned int i;
	        
	        for (i = 0; i < n; i++)
			    {
				            s[i] = b;
					        }
		    
		    return s;
}
