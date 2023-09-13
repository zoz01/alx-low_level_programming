#include "3-calc.h"

/**
 * op_add - will add
* @a:the 1st
* @b:the 2nd
* Return: result afte prog
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - will sub
* @a:the 1st
* @b:the 2nd
* Return: result afte prog
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul -will multi
* @a:the 1st
* @b:the 2nd
* Return: result afte prog
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - will divide
* @a:the 1st
* @b:the 2nd
* Return: result afte prog
*/
int op_div(int a, int b)
{
if (!b)
{
puts("Error");
exit(100);
}
return (a / b);
}

/**
* op_mod - the mod
* @a:the 1st
* @b:the 2nd
* Return: returns some r
*/
int op_mod(int a, int b)
{
if (!b)
{
puts("Error");
exit(100);
}
return (a % b);
}
