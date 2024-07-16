#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - opening of file
 * @head: pointer to start of list
 * @index: index to node to be deleted
 * Return: 1 for success, -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *ptr = *head;
unsigned int i;

if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = ptr->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(ptr);
return (1);
}
for (i = 0; ptr != NULL && i < index; i++)
{
ptr = ptr->next;
}
if (ptr == NULL)
{
return (-1);
}
if (ptr->prev != NULL)
{
ptr->prev->next = ptr->next;
}
if (ptr->next != NULL)
{
ptr->next->prev = ptr->prev;
}
free(ptr);
return (1);
}
