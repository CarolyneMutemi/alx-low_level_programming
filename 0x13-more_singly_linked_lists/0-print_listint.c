#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: listint_t pointer to the 1st node.
 * Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
size_t total = 0;
const listint_t *ptr = NULL;

if (h == NULL)
{
return (0);
}

ptr = h;

while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
total++;
}

return (total);
}
