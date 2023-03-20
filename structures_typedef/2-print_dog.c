#include <stdio.h>
#include "dog.h"
/**
 *print_dog - Prints information about a dog
 *@d: Pointer to the dog structure to print
 *This function prints the name, age, and owner of a dog, if the corresponding
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
