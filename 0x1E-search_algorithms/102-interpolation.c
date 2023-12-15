#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: index of the value or -1 if value not found or array is NULL.
*/

int interpolation_search(int *array, size_t size, int value)
{
    size_t pos;
    size_t low = 0;
    size_t high = size - 1;

    while (value <= array[high] && value >= array[low] && low <= high)
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
        if (array[pos] > value)
            high = pos - 1;
        else if (array[pos] < value)
            low = pos + 1;
        else
            return (pos);
    }
    pos = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));
    printf("Value checked array[%ld] is out of range\n", pos);
    return (-1);
}
