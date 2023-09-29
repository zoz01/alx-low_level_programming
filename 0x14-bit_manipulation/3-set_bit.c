#include "main.h"

/**
 * set_bit - dgui fdoi dfjkh dfh osigfu
 * @n: dgui fdoi dfjkh dfh osigfu
 * @index: dgui fdoi dfjkh dfh osigfu
 * Return: dgui fdoi dfjkh dfh osigfu
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;

if (index > 63)
return (-1);

m = 1 << index;
*n = (*n | m);

return (1);
}
