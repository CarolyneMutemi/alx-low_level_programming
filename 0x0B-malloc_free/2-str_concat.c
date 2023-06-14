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
    int total, add, x, y, i, j = 0;
    char *new_string;
    add = 0;

    while (s1[j] != '\0')
    {
        j++;
        add += 1;
        total += 1;
    }

    while (s2[i] != '\0')
    {
        i++;
        total += 1;
    }

    new_string = malloc((sizeof(char) * total) + 1);

    if (s1 == NULL ) s1 = "";
    if (s2 == NULL) s2 = "";

    if (new_string == NULL)
    {
        return NULL;
    }
    else
    {
        for (x = 0; x < j; x++)
        {
            new_string[x] = s1[x];
        }
        for (y = 0; y < i; y++)
        {
            new_string[add++] = s2[y];
        }
        new_string[total] = '\0';
        return new_string;
    }

}