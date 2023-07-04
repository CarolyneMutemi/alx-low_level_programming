#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: pointer to listint_t pointer that points to the 1st node.
 * Return: nothing.
*/

void free_listint2(listint_t **head)
{
listint_t *temp = NULL;

if (*head == NULL)
{}
temp = *head;

while (temp != NULL)
{
temp = temp->next;
free(*head);
*head = temp;
}
*head = NULL;
}
