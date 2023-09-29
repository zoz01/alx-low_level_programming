#include "main.h"

/**
 * get_endianness - dgui fdoi dfjkh dfh osigfu
 * Return: dgui fdoi dfjkh dfh osigfu
 */
int get_endianness(void)
{
unsigned int x;
char *c;

x = 1;
c = (char *) &x;

return ((int)*c);
}
