#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - check the code for Holberton School students.
 * @head: list
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp;
temp = head;
if (head == NULL)
return (0);

while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
