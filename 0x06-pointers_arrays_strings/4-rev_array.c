#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: Pointer int a
 * @n: Parameter n
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *p = a;
	int b = 0;
	int i;

	n--;
	while (b < n)
	{
		i = *(p + b);
		*(p + b) = *(p + n);
		*(p + n) = i;
		b++;
		n--;
	}
}
