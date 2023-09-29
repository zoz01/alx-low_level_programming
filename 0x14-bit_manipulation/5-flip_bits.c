#include "main.h"

/**
 * flip_bits - dgui fdoi dfjkh dfh osigfu
 * @n: dgui fdoi dfjkh dfh osigfu
 * @m: dgui fdoi dfjkh dfh osigfu
 *
 * Return: dgui fdoi dfjkh dfh osigfu
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nbits;

for (nbits = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
nbits++;
}

return (nbits);
}
