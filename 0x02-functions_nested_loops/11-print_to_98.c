#include "main.h"
#include <stdio.h>
/**
*print_to_98 - all of n to 98
*@n: the starting intceger
*return: none
*/
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
