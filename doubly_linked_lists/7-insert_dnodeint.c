#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - opening of file
 * @h: pointer to start of list
 * @idx: index where the code will insert a new node
 * @n: data
 * Return: Address to new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *ptr, *new;

new->n = n;
ptr = *h;
if (idx == 0)
{
new->next = *h;
*h = new;
return (*h);
}
for (i = 0; ptr != NULL; i++)
{
if (i == idx - 1)
{
new->next = ptr->next;
ptr->next = new;
}
ptr = (ptr)->next;
}
if (idx > i)
{
return (NULL);
}
return (new);
}
