#include "main.h"

/**
 * print_square - input
 *
 * Description: prints a square, followed by a new line.
 * @size: character
 * Return: void
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0 )
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
