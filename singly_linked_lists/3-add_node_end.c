#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - opening of file
 * @head: pointer to start of list
 * @str: pointer to data
 * Return: Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
int i;
list_t *ptr;

list_t *new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
{
;
}
new->len = i;
new->next = NULL;
if (*head != NULL)
{
ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new;
}
else
{
*head = new;
}
return (new);
}
