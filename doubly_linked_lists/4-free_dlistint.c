#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - opening of file
 * @head: pointer to start of list
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t  *new;

while ((new = head) != NULL)
{
head = head->next;
free(new->n);
free(new);
}
}
