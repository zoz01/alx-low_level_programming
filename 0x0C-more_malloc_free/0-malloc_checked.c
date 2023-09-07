#include "main.h"

/**
* malloc_checked -malloc aloc, exit(98) fail
* @b: this is the size
* Return: adress pntr
*/
void *malloc_checked(unsigned int b)
{
void *block;

block = malloc(b);
if (block == NULL)
exit(98);
return (block);
}
