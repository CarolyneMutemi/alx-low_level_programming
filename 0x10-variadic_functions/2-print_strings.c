#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: number of strings passed to the function.
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
if (separator == NULL)
{
separator = "";
}

va_start(args, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char*);
if (str == NULL)
{
str = "(nil)";
}

if (i < (n - 1))
{
printf("%s%s", str, separator);
}
else if (i == (n - 1))
{
printf("%s", str);
}
}
va_end(args);
printf("\n");
}
