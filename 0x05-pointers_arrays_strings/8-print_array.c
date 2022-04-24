#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: Pointer to int a
 * @n: Parameter n
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index < n - 1)
			printf(", ");
	}
	printf("\n");
}
