#include "function_pointers.h"

/**
* int_index - tho find the int
* @array:to find the ar
* @size:the arr elm num
* @cmp:fun will erturn a val
*Return: basicly the programm
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (cmp && array)
{
for (i = 0; i < size; ++i)
{
if (cmp(array[i]))
return (i);
}
}

return (-1);
}
