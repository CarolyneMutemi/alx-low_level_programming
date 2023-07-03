#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to list_t pointer that points to the first node.
 * @str: the string data part of the new node.
 * Return: address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp = NULL;
list_t *ptr = malloc(sizeof(list_t));
if (ptr == NULL)
{
return (NULL);
exit(1);
}

ptr->str = strdup(str);
ptr->len = strlen(ptr->str);
ptr->next = NULL;

if (*head == NULL)
{
*head = ptr;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = ptr;
}

return (ptr);
}
