nclude "holberton.h"

/**
*_print_rev_recursion - outputs string as in reverse
*@s: the strn
*Return: when success 1
*when error, -1
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
