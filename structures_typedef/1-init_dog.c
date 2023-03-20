#include "dog.h"

/**
 * init_dog - initializes a struct dog
 * @d: pointer to the struct dog
 * @name: pointer to the name of dog
 * @age: age of dog
 * @owner: pointer to the owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
