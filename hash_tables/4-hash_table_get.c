#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - opening of file
 * @ht: pointer to hash table
 * @key: pointer to key to get
 * Return: value at key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i;
hash_node_t *ptr;

if (ht == NULL || key || NULL || *key == '\0')
{
return (NULL);
}
i = key_index((const unsigned char *)key, ht->size);
ptr = ht->array[i];
while (ptr != NULL)
{
if (strcmp(ptr->key, key) == 0)
{
return (ptr->value);
}
ptr = ptr->next;
}
return (NULL);
}
