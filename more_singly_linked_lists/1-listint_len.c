#include <stdio.h>
#include "lists.h"

/**
 * listint_len - opening of file
 * @h: pointer to list
 * Return: Number of nodes in a list
 */

size_t listint_len(const listint_t *h)
{
int i = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
