#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: first n bytes of s2.
 * Return: pointer pointing to a newly allocated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, total;
char *arr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

if (n >= j + 1)
total = i + j + 1;
else
total = i + n + 1;

arr = malloc(total);

if (arr == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
arr[i] = s1[i];
}

for (j = 0; i < total; j++)
{
arr[i] = s2[j];
i++;
}
arr[total] = '\0';

return (arr);
}
