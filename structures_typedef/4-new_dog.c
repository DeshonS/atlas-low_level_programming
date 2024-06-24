#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - opening of file
 * @s: char
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int count = 0;

if (*s != '\0')
{
while (*(s + count) != '\0')
count++;
}
return (count);
}

/**
 * _strcpy - opening of file
 * @dest: destination string
 * @src: source string
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
int i;
i = 0;

while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}

/**
 * new_dog - opening of file
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: values of new struct new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int len_name, len_owner;
struct dog *new_dog;
new_dog = malloc(sizeof(struct dog));

if (new_dog == NULL)
return (NULL);
len_name = _strlen(name);
new_dog->name = malloc(sizeof(char) * (len_name + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->name = _strcpy(new_dog->name, name);
new_dog->age = age;
len_owner = _strlen(owner);
new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
new_dog->owner = _strcpy(new_dog->owner, owner);
return (new_dog);
}
