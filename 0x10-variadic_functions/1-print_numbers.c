#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: number of integers passed to the function.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
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
if (i < (n - 1))
{
printf("%d%s", va_arg(args, int), separator);
}
else if (i == (n - 1))
{
printf("%d", va_arg(args, int));
}
}
va_end(args);
printf("\n");
}
