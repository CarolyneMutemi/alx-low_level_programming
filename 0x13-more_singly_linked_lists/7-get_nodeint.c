#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: listint_t pointer to the 1st node.
 * @index: the index of the node, starting at 0.
 * Return: nth node of a listint_t linked list,
 * NULL if the node doesn't exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *temp = NULL;

if (head == NULL)
{
return (NULL);
}

temp = head;

while (count != index)
{
temp = temp->next;
count++;
if (temp == NULL)
{
return (NULL);
break;
}
}

return (temp);
}
