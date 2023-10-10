#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - the function
 * @name: input
 * @age: input
 * @owner: input
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = (name != NULL) ? strdup(name) : NULL;
if (new_dog->name == NULL && name != NULL)
{
free(new_dog);
return (NULL);
}
new_dog->age = age;
new_dog->owner = (owner != NULL) ? strdup(owner) : NULL;
if (new_dog->owner == NULL && owner != NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
return (new_dog);
}
