#include "lists.h"

/**
 * add_dnodeint_end - Print all the elements of a doubly linked list
 * @head: header of the list
 * @n: const to be added
 * Return: An unsigned integer, number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *p;

if (new != NULL)
{
p = *head;
while (p != NULL && p->next != NULL)
{
p = p->next;
}
new->n = n;
new->next = NULL;
if (p != NULL)
{
p->next = new;
new->prev = p;
}
else
*head = new;
return (new);
}
return (NULL);
}
