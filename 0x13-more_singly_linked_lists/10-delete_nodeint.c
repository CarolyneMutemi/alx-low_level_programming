#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at given index
 * of a listint_t linked list.
 * @head: pointer to listint_t pointer that points to the first node.
 * @index: index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *ptr = *head;
unsigned int count = 1;
temp = NULL;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
ptr = ptr->next;
free(*head);
*head = ptr;
return (1);
}

while (count < index)
{
count++;
ptr = ptr->next;
if (ptr->next == NULL)
{
return (-1);
break;
}
}
if (ptr->next == NULL)
{}
temp = ptr->next;
ptr->next = ptr->next->next;
free(temp);
temp = NULL;

return (1);
}
