#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - opening of file
 * @head: pointer to start of list
 * @str: pointer to string
 * Return: Pointer to address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
char newstr = new->str;

if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
new->next = *head;
*head = new;
return (*head);
}
