#include <stdio.h>
#include "lists.h"

/**
 * list_len - opening of file
 * @h: pointer to list
 * Return: Number of elements in a list
 */

size_t list_len(const list_t *h)
{
int i;

for (i = 0; h != NULL; i++)
{
h = h->next;
}
return (i);
}
