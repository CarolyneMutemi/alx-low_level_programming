#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string.
 * @s: Pointer char s.
 *Return: void
 */

void rev_string(char *s)
{
	int index, len, t;

	len =  strlen(s);

	for (index = 0; index < len / 2; index++)
	{
		t = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = t;
	}
}
