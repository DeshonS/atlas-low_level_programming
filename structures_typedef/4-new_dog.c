#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

size_t string_length(const char *str)
{
size_t length = 0;
while (str[length] != '\0')
{
length++;
}
return length;
}

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *x;
x = malloc(sizeof(dog_t));
if (x == NULL)
{
return NULL;
}

size_t name_len = string_length(name);
x->name = malloc(name_len + 1);
if (x->name == NULL)
{
free(x);
return NULL;
}
for (size_t i = 0; i <= name_len; i++)
{
x->name[i] = name[i];
}

size_t owner_len = string_length(owner);
x->owner = malloc(owner_len + 1);
if (x->owner == NULL)
{
free(x->name);
free(x);
return NULL;
}
for (size_t i = 0; i <= owner_len; i++)
{
x->owner[i] = owner[i];
}

x->age = age;

return x;
}
