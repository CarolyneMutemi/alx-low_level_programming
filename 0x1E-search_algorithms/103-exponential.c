#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, size_t beg, size_t end);
int search_binary(int *array, size_t low_bound, size_t bound, int value);
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: index of the value or -1 if not found or if array is NULL.
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t low_bound;
	size_t bound = 1;

	if (!array)
		return (-1);

	/* First find the bound to be used in a binary search. */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	low_bound = bound / 2;
	if (bound >= size)
		bound = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low_bound, bound);
	return (search_binary(array, low_bound, bound, value));
}

/**
 * search_binary - searches for a value in a sorted array
 * using binary search algorthm.
 * @array: a pointer to the first element of the array to search in.
 * @low_bound: the index to start you search.
 * @bound: the last index to stop your search.
 * @value: the value to search for.
 * Return: index of the value or -1 if not found or if array is NULL.
*/

int search_binary(int *array, size_t low_bound, size_t bound, int value)
{
	size_t mid;
	size_t low = low_bound;
	size_t high = bound;

	while (low <= high && high <= bound)
	{
		mid = low + ((high - low) / 2);
		printf("Searching in array: ");
		print_array(array, low, high + 1);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
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
