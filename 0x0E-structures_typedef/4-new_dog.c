#include "dog.h"
#include <stdlib.h>

/**
 * dog_t *new_dog - creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: pointer of type dog_t.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *maxie = malloc(sizeof(dog_t));
if (maxie == NULL)
{
return (NULL);
}
maxie->age = age;
maxie->name = name;
maxie->owner = owner;
return (maxie);
}
