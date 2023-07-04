#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: listint_t pointer to pointer that points to the 1st node.
 * Return: the head node's data (n), 0 if list is empty.
*/

int pop_listint(listint_t **head)
{
listint_t *temp = NULL;
int n;

if (*head == NULL)
{
return (0);
}
temp = *head;
n = temp->n;

temp = temp->next;
free(*head);
*head = temp;

return (n);
}
