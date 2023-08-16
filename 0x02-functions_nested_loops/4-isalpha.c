#include "main.h"
/**
*_isalpha - determine is char alphabetica
*@c: verifies char
*Return: might be 0 , 1
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
return (0);
}
