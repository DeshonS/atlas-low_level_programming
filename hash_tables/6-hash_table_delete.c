#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - opening of file
 * @ht: table to be deleted
 * Return: (void)
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node, *ptr;

if (ht == NULL)
{
return;
}
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
ptr = node->next;
free(node->key);
free(node->value);
free(node);
node = ptr;
}
}
free(ht->array);
free(ht);
}
