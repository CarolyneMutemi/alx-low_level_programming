#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @a: Pointer char a
 * Return: a
 */

char *leet(char *a)
{
	int b, c;

	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; let[c] != '\0'; c++)
		{
			if (a[b] == let[c])
				a[b] = num[c];
		}
	}
	return (a);
}
