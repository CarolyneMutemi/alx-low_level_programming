#include <stdlib.h>
#include <stdio.h>

int binary_search(int *array, size_t size, int value)
{
    size_t mid;
    size_t beg = 0;
    size_t end = size - 1;

    while (beg <= end && end < size)
    {
        printf("Searching in array:");
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
