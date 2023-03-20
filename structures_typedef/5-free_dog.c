#include <stdlib.h>
#include "main.h"

void free_dog(dog_t *d);
{
if (d == (NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
