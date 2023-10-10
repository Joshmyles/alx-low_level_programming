#include <stdio.h>
#include <stdlib.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

void print_dog(struct dog *d) {
    if (d == NULL) {
        return; // If d is NULL, print nothing
    }

    printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
    printf("Age: %.1f\n", d->age);
    printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

int main() {
    // Declare a struct dog variable
    struct dog my_dog;

    // Initialize the struct dog variable
    my_dog.name = "Buddy";
    my_dog.age = 3.5;
    my_dog.owner = NULL; // Simulating a NULL owner

    // Print the struct dog
    print_dog(&my_dog);

    return 0;
}
