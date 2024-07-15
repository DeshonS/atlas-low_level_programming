#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
}
return (hash);
}

/**
 * key_index - opening of file
 * @key: key
 * @size: size of the array
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash = hash_djb2(key);
return (hash % size);
}
