#include "main.h"
/**
* _puts - print string for stdout
* @str: the string to br printed
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
