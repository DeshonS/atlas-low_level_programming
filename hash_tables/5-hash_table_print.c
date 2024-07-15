#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - opening of file
 * @ht: hash table to print
 * Return: Printed has table
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;
int f;

if (ht == NULL)
{
return;
}
printf("{");
f = 1;
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
if (!f)
{
printf(", ");
}
printf("'%s': '%s'", node->key, node->value);
f = 0;
node = node->next;
}
}
printf("}\n");
}
