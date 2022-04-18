#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * Description: Prints the alphabet with _putchar
 * @c: character
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
