#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - opening of file
 * @h: element of a list
 * Return: Elements of list
 */

size_t print_dlistint(const dlistint_t *h)
{
int i = 0;

while (h != NULL)
{
if (h->n == -1)
{
printf("[0] (nil)\n");
}
else
{
printf("%d\n", h->n);
}
h = h->next;
i++;
}
return (i);
}
