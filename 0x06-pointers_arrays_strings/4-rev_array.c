#include "holberton.h"
/**
 * reverse_array -tysd dfg dtry gfthy dyf
 * @a: vtysd dfg dtry gfthy dyf
 * @n: tysd dfg dtry gfthy dyf
 * Return: tysd dfg dtry gfthy dyf
 */
void reverse_array(int *a, int n)
{
int swap, begin, end;

begin = 0;
end = n - 1;
while (begin < end)
{
swap = *(a + begin);
*(a + begin) = *(a + end);
*(a + end) = swap;
begin++;
end--;
}
}
