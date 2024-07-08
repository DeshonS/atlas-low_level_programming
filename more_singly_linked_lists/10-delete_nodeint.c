#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - opening of file
 * @head: pointer to start of list
 * @index: index of node to be deleted
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ptr, *new;
unsigned int i = 0;

ptr = *head;
if (*head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = ptr->next;
free(ptr);
return (1);
}
if (index == 1)
{
ptr = (*head)->next;
(*head)->next = ptr->next;
free(ptr);
return (1);
}
while (i < index - 1)
{
if (ptr->next == NULL)
{
return (-1);
}
i++;
ptr = ptr->next;
new = ptr->next;
}
ptr->next = new->next;
free(new);
return (1);
}
