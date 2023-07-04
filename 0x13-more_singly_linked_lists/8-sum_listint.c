#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: listint_t pointer to the first node.
 * Return: sum of all the data (n) of a listint_t linked list,
 * 0 if the list is empty.
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = NULL;

if (head == NULL)
{
return (0);
}

temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
