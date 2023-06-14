# include "main.h"
# include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * @c: contents of the array.
 * Return: NULL if size = 0, a pointer to the array,
 * or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
    char *arr = malloc(sizeof(char) * size);
    unsigned int i;

    if (size == 0) return (NULL);

    for (i = 0; i < size; i++) arr[i] = c;

    if (arr != NULL) return arr;
    else return (NULL);
}