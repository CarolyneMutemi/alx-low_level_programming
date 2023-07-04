#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to listint_t pointer that points to the first node.
 * @idx: index of the list where the new node should be added. Starts at 0.
 * @n: the int data part of the node.
 * Return: the address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 1;
listint_t *temp, *ptr = malloc(sizeof(listint_t));
temp = NULL;

if (!ptr)
{
free(ptr);
ptr = NULL;
return (ptr);
}

ptr->n = n;
ptr->next = NULL;

temp = *head;
if (idx == 0)
{
ptr->next = *head;
*head = ptr;
return (ptr);
}
while (count < idx)
{
count++;
temp = temp->next;
if (temp == NULL)
{
return (NULL);
break;
}
}

if (temp == NULL)
{}
ptr->next = temp->next;
temp->next = ptr;

return (ptr);
}
