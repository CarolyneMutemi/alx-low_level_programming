#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head pointer to the list.
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	dlistint_t *temp;

	if (head)
	{
		while (ptr->next)
		{
			temp = ptr;
			ptr = ptr->next;
			free(temp);
		}
		free(ptr);
	}
}
