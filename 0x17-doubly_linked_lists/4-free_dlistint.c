#include "lists.h"

/**
 * free_dlistint - Print all the elements of a doubly linked list
 * @head: header of the list
 * Return: An unsigned integer, number of nodes
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *next;
while (head)
{
next = head->next;
free(head);
head = next;
}
}
