#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - opening of file
 * @head: pointer to start of list
 * Return: None
 */

void free_listint(listint_t *head)
{
    listint_t *new;
    while (head != NULL)
    {
        new = head->next;
        free(head);
        head = new;
    }
}