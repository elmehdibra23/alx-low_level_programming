#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to the struct dog instance
 * @name: Pointer to char representing the dog's name
 * @age: Float representing the dog's age
 * @owner: Pointer to char representing the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
