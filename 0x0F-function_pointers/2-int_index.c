#include <stddef.h>

/**
 * int_index - searches for an integer.
 * @array: array we are iterating through.
 * @size: number of elements in the array.
 * @cmp: pointer to the function to be used to compare values.
 * Return:  returns the index of the first element
 * for which the cmp function does not return 0.
 * If no element matches, return -1.
 * If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i, result;
if (array == NULL || cmp == NULL)
{
return (-1);
}
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
result = cmp(array[i]);
if (result != 0)
{
break;
}
}
if (result == 0)
{
return (-1);
}
return (i);
}
