#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - opening of file
 * @head: pointer to start of list
 * @idx: node to insert data to
 * @n: data
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new, *ptr;

new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}
new->n = n;
ptr = *head;
if (idx == 0)
{
new->next = *head;
*head = new;
return (*head);
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
