#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src to dest.
 * @dest: pointer copied to.
 * @src: pointer to copy.
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;
	int len = strlen(src);

	for (index = 0; index <= len; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
