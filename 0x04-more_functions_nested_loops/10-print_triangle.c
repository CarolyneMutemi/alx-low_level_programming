#include "main.h"

/**
 * print_triangle - input
 *
 * Description: prints a triangle, followed by a new line.
 * @size: character
 * Return: void
 */

void print_triangle(int size)
{
	int row, height, tag;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (height = size - row; height >= 1; height--)
			{
				_putchar(' ');
			}
			for (tag = 1; tag <= row; tag++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
