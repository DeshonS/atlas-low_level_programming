#include <stdio.h>
#include "lists.h"

/**
* print_listint - opening of file
* @h: pointer to a list
* Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h != NULL)
{
printf("[0] (nil)\n");
h = h->next;
i++;
}
return (i);
}
