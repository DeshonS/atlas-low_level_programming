#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - opening of file
 * @head: double pointer to start of list
 * Return: None
 */

void free_listint2(listint_t **head)
{
listint_t *new;

if (head == NULL)
{
return;
}
while (*head != NULL)
{
new = (*head)->next;
free(*head);
*head = new;
}
*head = NULL;
}
