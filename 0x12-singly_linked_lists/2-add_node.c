#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a list_t pointer that points to the first node.
 * @str: the string data part of the new node.
 * Return: address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *ptr = malloc(sizeof(list_t));
if (!ptr)
{
return (NULL);
free(ptr);
}

if (str == NULL)
{
ptr->str = NULL;
}
else
{
ptr->str = strdup(str);
ptr->len = strlen(ptr->str);
if (!ptr->str)
{
free(ptr->str);
}
}


ptr->next = *head;
*head = ptr;

return (ptr);
}
