#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)
{
	char low;

	low = 'a';
	while (low <= 'z')
	{
		_putchar(low);
		low++;
	}
	_putchar('\n');
}
