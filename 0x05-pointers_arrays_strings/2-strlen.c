#include "main.h"

/**
 * _strlen - returns length of string
 *
 *@s: pointer to string
 * Return: int
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}
