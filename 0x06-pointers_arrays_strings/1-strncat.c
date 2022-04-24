#include "main.h"

/**
 * _strncat - function that concatenates two strings with n chars in src
 * @dest: Pointer char dest
 * @src: Pointer char src
 * @n: number of chars to concatenate.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;
	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < n && src[b]; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
