#include "holberton.h"

/**
*prime2 - evaluate froom 1 => n
*@a: same number as n
*@b: iterates 1 => n
*Return: success 1
*error, -1
*/
int prime2(int a, int b)
{
if (a == b)
return (1);
else if (a % b == 0)
return (0);
return (prime2(a, b + 1));
}
/**
*is_prime_number - checks if it's prime or not
*@n: Integer
*Return: success 1
*error, -1
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime2(n, 2));
}
