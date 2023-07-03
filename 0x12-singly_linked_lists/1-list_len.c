#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list_t pointer to the first node.
 * Return: number of elements in a linked list_t list.
*/

size_t list_len(const list_t *h)
{
const list_t *ptr = NULL;
size_t count = 0;

if (h == NULL)
{
printf("Error\n");
return (1);
}

ptr = h;

while (ptr != NULL)
{
ptr = ptr->next;
count++;
}

return (count);
}
