#include <stdlib.h>

/**
 * array_range - creates an ordered array of integers.
 * @min: first and least number in the array.
 * @max: last and largest number in the array.
 * Return: the pointer to the newly created array.
*/

int *array_range(int min, int max)
{
int *arr;
int i, j = 0;
int a = 0;

if (min > max)
return (NULL);

for (i = min; i <= max; i++)
{
j += 1;
}

arr = malloc((j) *sizeof(int));

if (arr == NULL)
return (NULL);

for (i = min; i <= max; i++)
{
arr[a] = i;
a++;
}

return (arr);
}
