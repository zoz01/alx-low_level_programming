#include "holberton.h"

/**
*palind2 - get length a
*@a: a string
*@l: integer 4 length
*Return: success 1.
*error, -1
*/
int palind2(char *a, int l)
{
if (*a == 0)
return (l - 1);
return (palind2(a + 1, l + 1));
}
/*
*palind3 - compares string vs string reverse
*@a: string
*@l: length
*Return: On success 1.
*On error, -1
*/

int palind3(char *a, int l)
{
if (*a != *(a + l))
return (0);
else if (*a == 0)
return (1);
return (palind3(a + 1, l - 2));
}
/**
*is_palindrome - checks if a string is a palindrome
*@s: string to evaluate
*Return: On success 1.
*error, -1
*/
int is_palindrome(char *s)
{
int l;
l = palind3(s, 0);
return (palind3(s, l));
}
