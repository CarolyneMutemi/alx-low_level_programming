#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: pointer to the string.
 * return: void
 */
void print_rev(char *s)
{
	int a;

	for (a = (strlen(s) - 1); a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
