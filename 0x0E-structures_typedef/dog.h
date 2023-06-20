#ifndef DOG
#define DOG

/**
 * struct dog - dog record.
 * @name: name of dog.
 * @owner: name of dog owner.
 * @age: age of dog.
*/

typedef struct dog
{
char *name, *owner;
float age;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
