#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

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
