#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
    if (d->name == NULL)
    {
        printf("(nil)");
    }
    if (d->owner == NULL)
    {
        printf("(nil)");
    }
    if (d == NULL)
    {
        ;
    }
    printf("%s\n", d->name);
    printf("%f\n", d->age);
    printf("%s\n", d->owner);
}