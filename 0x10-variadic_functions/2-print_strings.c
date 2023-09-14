#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings -srr wtte tre
* @separator: rtg ryt edcf
* @n: efr kjh rbuek
* Return:will be none
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *rip, *ptr;
unsigned int l;
va_list list;

if (separator == NULL || *separator == 0)
rip = "";
else
rip = (char *) separator;
va_start(list, n);

if (n > 0)
printf("%s", va_arg(list, char *));
for (l = 1; l < n; l++)
{
ptr = va_arg(list, char*);
if (ptr == NULL)
ptr = "(nil)";
printf("%s%s", rip, ptr);
}
printf("\n");
va_end(list);
}
