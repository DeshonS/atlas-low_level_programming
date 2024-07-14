#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - opening of file
 * @head: pointer to head of list
 * @n: data
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
return (new);
}
