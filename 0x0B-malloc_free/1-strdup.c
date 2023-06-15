# include <stdlib.h>
# include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: parameter char str.
 * Return: a pointer to a new string which is a duplicate
 * of the string str.
 */

char *_strdup(char *str)
{
int i, j = 0;
char *new_str;

if (str == NULL)
return (NULL);

while (str[j] != '\0')
{
j++;
}
j++;

new_str = malloc(sizeof(char) * j);

if (new_str == NULL)
return (NULL);
for (i = 0; i < j; i++)
{
new_str[i] = str[i];
}
return (new_str);
}
