#include <stddef.h>

/**
 * print_name - function that prints a name.
 * @name: name to be printed.
 * @f: void function pointer.
 * Return: nothing.
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
