#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: a pointer to the dog's name
 * @age: the dog's age
 * @owner: a pointer to the dog's owner's name
 *
 * Description: This structure represents a dog with a name, age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
