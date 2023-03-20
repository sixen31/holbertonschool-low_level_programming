#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new instance of the dog_t structure and initializes
 *@name: pointer to character array representing the name of the dog
 *@age: floating-point number representing the age of the dog
 *@owner: pointer to character array representing the name of the owner
 * Return: pointer created dog_t structure, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
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

dog->owner = malloc(strlen(owner) + 1);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
strcpy(dog->owner, owner);

dog->age = age;

return (dog);
}
