#include "main.h"

/**
 * print_line - input
 *
 * Description: draws a straight line in the terminal.
 * @n: character
 * Return: value n
 */

void print_line(int n)
{
	int line;

	if(n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
