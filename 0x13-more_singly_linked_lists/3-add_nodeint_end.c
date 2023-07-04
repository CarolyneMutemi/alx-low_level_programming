#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to listint_t pointer that points to the first node.
 * @n: int data for the new node.
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *ptr = malloc(sizeof(listint_t));

if (!ptr)
{
return (NULL);
free(ptr);
}

ptr->n = n;
ptr->next = NULL;
temp = *head;

if (*head == NULL)
{
*head = ptr;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = ptr;
}

return (ptr);
}
