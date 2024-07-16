#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - opening of file
 * @ht: hash table to be added to or updated
 * @key: key
 * @value: value associated with key
 * Return: 1 if successful, 0 for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int i;
hash_node_t *new, *ptr;
char *val;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}
val = strdup(value);
if (val == NULL)
{
return (0);
}
i = key_index((const unsigned char *)key, ht->size);
ptr = ht->array[i];
while (ptr != NULL)
{
if (strcmp(ptr->key, key) == 0)
{
free(ptr->value);
ptr->value = val;
return (1);
}
ptr = ptr->next;
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(val);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
free(val);
return (0);
}
new->value = val;
new->next = ht->array[i];
ht->array[i] = new;
return (1);
}
