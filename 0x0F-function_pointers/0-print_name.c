#include "function_pointers.h"

/**
* print_name - prt somthin
* @name: opv the name
* @f: caller of the name
*/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
f(name);
}
