#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head pointer of the list.
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: new node's data.
 * Return: address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	unsigned int num = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!new || !h)
		return (NULL);

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	while (ptr->next && num != idx)
	{
		ptr = ptr->next;
		num++;
	}
	num++;

	if (idx == num && !ptr->next)
		return (add_dnodeint_end(h, n));
	if (idx > num)
		return (NULL);

	ptr->prev->next = new;
	new->prev = ptr->prev;
	new->next = ptr;
	ptr->prev = new;

	return (new);

}
