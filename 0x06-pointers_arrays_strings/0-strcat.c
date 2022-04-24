#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to be appended to.
 *@src: A pointer to string that will be apppended.
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
