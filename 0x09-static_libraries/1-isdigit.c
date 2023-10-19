#include "main.h"
/**
*_isdigit - tells if a  character is a digit or not
*@c: testing character
*Return: will be 1 ehen uppercase , 0 not
*/
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
return (0);
}
