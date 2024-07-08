#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - opening of file
 * @head: pointer to start of list
 * @idx: node to insert data to
 * @n: data
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;

    for (i = 0; head != NULL; i++)
    {
        if (i == idx)
        {
            (*head)->n = n;
        }
        *head = (*head)->next;
    }
    return (*head);
}