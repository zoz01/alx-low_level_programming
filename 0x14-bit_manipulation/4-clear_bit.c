#include "main.h"

/**
 * clear_bit - dgui fdoi dfjkh dfh osigfu
 * @n: dgui fdoi dfjkh dfh osigfu
 * @index: dgui fdoi dfjkh dfh osigfu
 * Return: dgui fdoi dfjkh dfh osigfu
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;

if (index > 63)
return (-1);

m = 1 << index;

if (*n & m)
*n ^= m;

return (1);
}
