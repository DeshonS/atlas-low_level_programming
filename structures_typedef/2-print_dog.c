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
        return(0);
    }
    printf("%s\n", d->name);
    printf("%d\n", d->age);
    printf("%d\n", d->owner);
    return (0);
}