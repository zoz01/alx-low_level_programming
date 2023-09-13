#include "function_pointers.h"

/**
* array_iterator - dosomthin to arr
* @array:basicly the arr
* @size:arrs sze
* @action:basicly the act
* Return:subbosed to be void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && action)
{
while (size--)
action(*array++);
}
}
