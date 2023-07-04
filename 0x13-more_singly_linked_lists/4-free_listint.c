#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: listint_t pointer to the 1st node.
 * Return: nothing.
*/

void free_listint(listint_t *head)
{
listint_t *temp = NULL;
if (head == NULL)
{}

temp = head;
while (temp != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
