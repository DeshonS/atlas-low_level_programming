#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - opening of file
 * @head: pointer to start of list
 * @n: data
 * Return: address of new element or NULL for failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *ptr;

new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
ptr = *head;
if (*head == NULL)
{
*head = new;
}
else
{
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new;
}
return (*head);
}
