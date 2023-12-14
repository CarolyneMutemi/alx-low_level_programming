#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the value or -1 if value is not in the array
 * or if array is NULL.
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, x;
	size_t block = sqrt((double) size);
	size_t check = 0;
	size_t prev = 0;

	while (check < size)
	{
		printf("Value checked array[%ld] = [%d]\n", check, array[check]);
		if (array[check] == value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, check);
			return (check);
		}
		prev = check;
		check += block;

		if (array[check] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, check);
			for (i = prev; i <= check; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, check);
	for (x = prev; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
