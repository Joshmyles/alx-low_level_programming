#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - the struct
 * @name: input
 * @age: input
 * @owner: input
 */

struct dog
{
char *name;
float age;
char *owner;
};
#endif /* DOG_H */
