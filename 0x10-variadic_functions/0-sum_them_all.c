#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* sum_them_all - rhe suaet
* @n: rju rvdsov ignpe
* Return: rues sifh
*/
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int l, sum = 0;

if (n == 0)
return (0);

va_start(valist, n);

for (l = 0; l < n; l++)
{
sum += va_arg(valist, const unsigned int);
}

va_end(valist);

return (sum);
}
