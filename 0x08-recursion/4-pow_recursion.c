nclude "holberton.h"

/**
*_pow_recursion - but x the power y
*@x: Integer
*@y: the Power
*Return: success 1
*error, -1
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
