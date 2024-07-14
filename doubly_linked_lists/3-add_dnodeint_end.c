#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - opening of file
 * @head: double pointer to the start of list
 * @n: data
 * Return: address of new element or NULL for failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *ptr;

dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head != NULL)
{
ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new;
if (*head != NULL)
{
(ptr)->next = new;
}
}
else
{
*head = new;
}
return (new);
}
