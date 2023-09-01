#include "holberton.h"

/**
*sqrt2 - valuate from 1 => n
*@a: equal to n
*@b: iterates from 1 => n
*Return: when success 1
*error, -1
*/
int sqrt2(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
return (sqrt2(a, b + 1));
}
/**
*_sqrt_recursion - prints the natural square root of n
*@n: is Integer
*Return: On success 1
*error, -1
*/
int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}
