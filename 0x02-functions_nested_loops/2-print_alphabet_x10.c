#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lower
 * Return : Always return 0 (Success)
 */
void print_alphabet_x10(void)
{
	char low;
	int i;

	i = 1;

	while (i <= 10)
	{
		low = 'a';
		while (low <= 'z')
			{
				_putchar(low);
				low++;
			}
		_putchar('\n');
		i++;
	}
}
