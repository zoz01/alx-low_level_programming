#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - frgth rty hry
* c =tyr rty uyui huji
* @format: ytyut rt limi
* Return:roo 0
*/
void print_all(const char * const format, ...)
{
va_list valist;
int n = 0, l = 0;
char *rip = ", ";
char *str;

va_start(valist, format);

while (format && format[l])
l++;

while (format && format[n])
{
if (n  == (l - 1))
{
rip = "";
}
switch (format[n])
{
case 'c':
printf("%c%s", va_arg(valist, int), rip);
break;
case 'i':
printf("%d%s", va_arg(valist, int), rip);
break;
case 'f':
printf("%f%s", va_arg(valist, double), rip);
break;
case 's':
str = va_arg(valist, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", str, rip);
break;
}
n++;
}
printf("\n");
va_end(valist);
}
