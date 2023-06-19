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
if (d->age == 0)
{
printf("Age: (nil)\n");
}
else
{
printf("Age: %f\n", d->age);
}
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
if (d->owner == NULL)
{
printf("Owner: (nil)");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
}
