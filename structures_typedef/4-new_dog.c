#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * dog_t - name of typedef
 * *new_dog - name of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new credentials for new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    int i, j;
    dog_t *x;
    x = malloc(sizeof(dog_t));
    x->name = malloc(sizeof(name) + 1);
    x->owner = malloc(sizeof(owner) + 1);

    if (x == NULL)
    {
        return (NULL);
    }
    if (x->name == NULL)
    {
        free(x);
        return (NULL);
    }
    for (i = 0; name[i] != '\0'; i++)
    {
        x->name[i] = name[i];
    }
    if(x->owner == NULL)
    {
        free(x);
        free(x->name);
        return (NULL);
    }
    for (j = 0; owner[j] != '\0'; j++)
    {
        x->owner[j] = owner[j];
    }
    x->age = age;
    return (x);
}