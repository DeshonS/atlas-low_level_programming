#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - opening of file
 * @head: pointer to start of list
 * Return: Sum of list
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (!head)
{
return (0);
}
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
