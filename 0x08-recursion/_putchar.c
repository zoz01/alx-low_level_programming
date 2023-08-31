nclude <unistd.h>

/**
 ** _putchar - prints it to  stdout
 ** @c: print a char
 ** Return: success 1.
 ** On error, -1
 **/
int _putchar(char c)
{
		return (write(1, &c, 1));	
}

