#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: pointer to struct dog.
 * Return: nothing.
*/

void print_dog(struct dog *d)
{
if (d == NULL)
{}
else
{
if (d->owner == NULL)
d->owner = "(nil)";

if (d->name == NULL)
d->name = "(nil)";

printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
