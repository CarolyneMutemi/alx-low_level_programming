#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: unsigned int with size of the pointer.
 * Return: pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
char *p = malloc(b);
if (b == 0)
return (NULL);
if (p == NULL)
exit(98);

return (p);
}
