#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * of nmemb elements of size bytes each and
 * returns a pointer to the allocated memory.
 * @nmemb: number of elements of an array.
 * @size: size of elements in bytes.
 * Return: a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *arr;

if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(nmemb * size);

if (arr == NULL)
return (NULL);

while (i < nmemb)
{
arr[i] = 0;
i++;
}
return (arr);
}
