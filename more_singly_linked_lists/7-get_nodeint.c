#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - opening of file
 * @head: pointer to start of list
 * @index: index of node
 * Return: nth node, or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head != NULL; i++)
{
if (i == index)
{
return (head);
}
head = head->next;
}
return (NULL);
}
