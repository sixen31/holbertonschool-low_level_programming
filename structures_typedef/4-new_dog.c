#include <stdio.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner);
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
    
dog->name = malloc(strlen(name) + 1);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
strcpy(dog->name, name);
dog->owner = malloc(strlen(owner);
if (dog->owner == (NULL)
{
free(dog->name);
free(*dog);
return (NULL);
}
strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
