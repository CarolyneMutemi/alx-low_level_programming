#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: list_t pointer to the first node.
 * Return: nothing.
*/

void free_list(list_t *head)
{
list_t *temp = NULL;
if (head != NULL)
{
temp = head;
while (temp != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
}
