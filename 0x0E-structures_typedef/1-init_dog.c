#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - the function
 * @d: dog
 * @name: input
 * @age: input
 * @owner: input
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = strdup(name);
d->age = age;
d->owner = strdup(owner);
}
