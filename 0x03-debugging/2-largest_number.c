#include "main.h"

/**
 * largest_number - the largest of the 3
 * @a: 1st one
 * @b: 2nd one
 * @c: 3rd one
 * Return: the largest ofthem
 */
int largest_number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
