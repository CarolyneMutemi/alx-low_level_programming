#include <stdlib.h>
#include <stdio.h>

void print_array(int *array, size_t beg, size_t end);
/**
 * advanced_binary - works just like binary search but returns indes of the
 * first value in an arry if the value appears more than once.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: index of the value or -1 if value is not found or if array is NULL.
*/

int advanced_binary(int *array, size_t size, int value)
{
	size_t mid;
	size_t low = 0;
	size_t high = size - 1;

	while (low <= high && high < size)
	{
		printf("Searching in array: ");
		print_array(array, low, high + 1);
		mid = low + ((high - low) / 2);
		if (array[mid] == value && array[mid - 1] == value)
			high = mid;
		else if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

/**
 * print_array - to print an array.
 * @array: a pointer to the first element of the array to search in.
 * @beg: beginning index to print.
 * @end: end index to print:
 * Return: nothing
*/

void print_array(int *array, size_t beg, size_t end)
{
	size_t i;

	for (i = beg; i < end - 1; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[end - 1]);
}
