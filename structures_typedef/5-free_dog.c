#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for a dog_t structure
 * @d: pointer to dog_t structure to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
