#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: head pointer to the list.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num = 1;
	dlistint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h->next;

	printf("%d\n", h->n);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		num++;
	}
	return (num);
}
