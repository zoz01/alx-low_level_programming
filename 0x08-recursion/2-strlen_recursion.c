nclude "holberton.h"
/**
 * *_strlen_recursion - for String length
 * *@s: the string
 * *Return: success 1
 * *error, -1
 * */
int _strlen_recursion(char *s)
{
	        if (*s != '\0')
			        {
					                return (1 + _strlen_recursion(s + 1));
							        }
		        return (0);
}
