#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: char pointer s1.
 * @s2: char pointer s2.
 * Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
int total, x, y, i, j = 0;
char *new_string;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[j] != '\0')
{
j++;
total++;
}

while (s2[i] != '\0')
{
i++;
total++;
}

new_string = malloc((sizeof(char) * total) +1);

if (new_string == NULL)
{
return (NULL);
}

for (x = 0; x < j; x++)
{
new_string[x] = s1[x];
}
for (y = 0; y < i; y++)
{
new_string[x] = s2[y];
x++;
}
return (new_string);
}
