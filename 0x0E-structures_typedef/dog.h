#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the struct
 * @name: input
 * @age: input
 * @owner: input
 *
 * Description: Information on a dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/**
 * init_dog -function
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 *
 * Description: Prints dog details
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog -function
 * @d: input
 *
 * Description: Prints dog details
 */
void print_dog(struct dog *d);

/**
 * new_dog -function
 * @name: input
 * @age: input
 * @owner: input
 * Return: new dog
 *
 * Description: Prints dog details
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog -function
 * @d: input
 *
 * Description: Prints dog details
 */
void free_dog(dog_t *d);

#endif /* DOG_H */
