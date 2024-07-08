#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - opening of file
 * @head: double pointer to start of list
 * Return: data of head node
 */

int pop_listint(listint_t **head)
{
int i = 0;
listint_t *new;

if (*head == NULL)
{
return (0);
}
i = (*head)->n;
new = *head;
*head = (*head)->next;
free (new);
return(i);
}
