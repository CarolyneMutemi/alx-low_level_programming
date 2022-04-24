#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: Pointer char str
 * Return: void
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
		;
	if (a % 2 == 0)
	{
		a = a / 2;
	}
	else
	{
		a = (a - 1) / 2;
		a++;
	}
	for (; str[a]; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
