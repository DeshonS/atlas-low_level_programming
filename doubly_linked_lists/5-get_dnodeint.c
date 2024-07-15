#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - opening of file
 * @head: pointer to start of list
 * @index: location of data needing to be accessed
 * Return: data at index or NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head != NULL; i++)
{
if (i == index)
{
return (head);
}
head = head->next;
}
return (NULL);
}
