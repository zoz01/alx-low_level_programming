#include "main.h"
/**
*_isupper - tells if a  character is uppercase or not
*@c: testing character
*Return: 1 when uppercase , 0 whe not
*/
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
return (0);
}
