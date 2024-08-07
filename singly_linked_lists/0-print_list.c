#include <stdio.h>
#include "lists.h"

/**
* print_list - opening of file
* @h: pointer to a list
* Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
int i = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
i++;
}
return (i);
}
