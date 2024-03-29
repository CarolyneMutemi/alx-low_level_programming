#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to listint_t pointer that points to the first node.
 * @n: int data for the new node.
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));

if (!ptr)
{
return (NULL);
free(ptr);
}

ptr->n = n;
ptr->next = *head;
*head = ptr;

return (ptr);
}
