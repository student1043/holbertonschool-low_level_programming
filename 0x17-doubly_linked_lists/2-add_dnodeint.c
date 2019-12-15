#include "lists.h"

/**
 * add_dnodeint - Print all the elements of a doubly linked list
 * @head: header of the list
 * @n: const to be added
 * Return: An unsigned integer, number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *first = malloc(sizeof(dlistint_t));
if (first != NULL)
{
first->n = n;
if (*head != NULL)
(*head)->prev = first;
first->next = (*head);
first->prev = NULL;
(*head) = first;
return (first);
}
return (NULL);
}
