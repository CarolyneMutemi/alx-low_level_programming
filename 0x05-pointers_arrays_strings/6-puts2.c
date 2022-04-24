#include "main.h"
#include <string.h>

/**
 * puts2- prints every character of a string starting with first
 * @str: Pointer to char str
 * Return: void
 */
void puts2(char *str)
{
	int len = 0, index = 0;

	while (str[len] != '\0')
		len++;

	for (; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
