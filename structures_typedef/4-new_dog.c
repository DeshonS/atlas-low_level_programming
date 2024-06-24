#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *x;
x = sizeof(dog_t);

if (x == NULL)
{
return (NULL);
}
if (name == NULL)
{
free(x);
free(owner);
return (NULL);
}
if (owner == NULL)
{
free(x);
free(name);
return (NULL);
}
x->name = name;
x->age = age;
x->owner = owner;
return (x);
}
