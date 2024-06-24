#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *x;
x = malloc(sizeof(dog_t));
x->name = malloc(strlen(name) + 1);
x->owner = malloc(strlen(owner) + 1);

if (x == NULL)
{
return (NULL);
}
if (x->name == NULL)
{
free(x);
return (NULL);
}
strcpy(x->name, name);
if (x->owner == NULL)
{
free(x);
free(x->name);
return (NULL);
}
strcpy(x->owner, owner);
x->age = age;
return (x);
}
