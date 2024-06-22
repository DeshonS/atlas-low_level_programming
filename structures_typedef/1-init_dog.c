#include <stdio.h>

struct dog
{
    char *name;
    float age;
    char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner) {
    if (d != NULL) {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
