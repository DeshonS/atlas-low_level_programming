#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - opening of file
 * @h: pointer to list
 * Return: Number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
int i;

for (i = 0; h != NULL; i++)
{
h = h->next;
}
return (i);
}
