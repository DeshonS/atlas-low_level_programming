#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - opening of file
 * @head: pointer to start of list
 * Return: None
 */

void free_list(list_t *head)
{
list_t *new;

while ((new = head) != NULL)
{
head = head->next;
free(new->str);
free(new);
}
}
