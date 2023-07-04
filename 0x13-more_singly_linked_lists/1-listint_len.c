#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: listint_t pointer to the 1st node.
 * Return: number of nodes.
*/

size_t listint_len(const listint_t *h)
{
const listint_t *ptr = NULL;
int elem = 0;

if (h == NULL)
{
return (0);
}

ptr = h;
while (ptr != NULL)
{
ptr = ptr->next;
elem++;
}

return (elem);
}
