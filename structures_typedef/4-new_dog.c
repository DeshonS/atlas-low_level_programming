#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *x;
int i, j;
x = malloc(sizeof(dog_t));
x->name = malloc(i + 1);
x->owner = malloc(j + 1);


for (i = 0; i != name['\0']; i++)
{
    ;
}
for (j = 0; j != owner['\0']; j++)
{
    ;
}
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
