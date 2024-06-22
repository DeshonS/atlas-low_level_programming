#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
        exit(0);
    }
    printf("Name: %s\n", d->name);
    printf("Age: %f\n", d->age);
    printf("Owner: %s\n", d->owner);
}