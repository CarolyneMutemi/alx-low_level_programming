#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head pointer of the list.
 * @n: new node's data.
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!ptr)
	{
		*head = new;
		return (new);
	}

	while (ptr->next)
		ptr = ptr->next;

	new->prev = ptr;
	ptr->next = new;

	return (new);
}
