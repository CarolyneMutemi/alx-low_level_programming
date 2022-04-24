#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: Pointer char str
 * Return: str
 */

char *cap_string(char *str)
{
	int b = 0;

	while (str[b])
	{
		while (!(str[b] >= 97 && str[b] <= 122))
			b++;

		if (str[b - 1] == ' ' ||
				str[b - 1] == '\t' ||
				str[b - 1] == '\n' ||
				str[b - 1] == ',' ||
				str[b - 1] == ';' ||
				str[b - 1] == '.' ||
				str[b - 1] == '!' ||
				str[b - 1] == '?' ||
				str[b - 1] == '"' ||
				str[b - 1] == '(' ||
				str[b - 1] == ')' ||
				str[b - 1] == '{' ||
				str[b - 1] == '}' ||
				b == 0)
			str[b] -= 32;

		b++;
	}

	return (str);
}
