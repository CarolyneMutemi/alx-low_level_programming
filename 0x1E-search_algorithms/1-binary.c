#include <stdlib.h>
#include <stdio.h>

void print_array(int *array, size_t beg, size_t end);
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the index where value is located.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t beg = 0;
	size_t end = size - 1;

	while (beg <= end && end < size)
	{
		printf("Searching in array: ");
		print_array(array, beg, end + 1);
		mid = beg + ((end - beg) / 2);
		if (array[mid] == value)
			return (mid);
		if (value > array[mid])
			beg = mid + 1;
		else
			end = mid - 1;
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
