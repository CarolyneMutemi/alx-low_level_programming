#include "main.h"
#include <string.h>

/**
 * puts2- that prints every other character of a string, starting with the first character, followed by a new line.
 * @str: Pointer to char str
 * Return: void
 */

void puts2(char *str)
{
	int len = 0, index = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; index <= len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
