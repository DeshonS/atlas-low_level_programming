#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - opening of file
 * @head: pointer to start of list
 * Return: sum of all data of a list
 */

int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
