#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head pointer of the list.
 * @n: data of the new node.
 * Return: address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = ptr;
	*head = new;

	if (ptr)
		ptr->prev = new;

	return (new);
}
