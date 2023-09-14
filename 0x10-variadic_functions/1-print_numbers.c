#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - the start of all
* @separator: the space of it
* @n: tje result pd or
* Return: qil be none
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
char *rip;
unsigned int l;
va_list list;

if (separator == NULL || *separator == 0)
rip = "";
else
rip = (char *) separator;
va_start(list, n);

if (n > 0)
printf("%d", va_arg(list, int));
for (l = 1; l < n; l++)
printf("%s%d", rip, va_arg(list, int));
printf("\n");
va_end(list);
}
