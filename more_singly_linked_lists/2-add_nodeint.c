#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - opening of file
 * @head: pointer to start of list
 * @n: data
* Return: location of memory for new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
