#include "main.h"

/**
 * print_binary - dgui fdoi dfjkh dfh osigfu
 * @n: dgui fdoi dfjkh dfh osigfu
 * Return: dgui fdoi dfjkh dfh osigfu
 */
void print_binary(unsigned long int n)
{
if (n >> 0)
{
if (n >> 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
else
{
_putchar('0');
}
}
