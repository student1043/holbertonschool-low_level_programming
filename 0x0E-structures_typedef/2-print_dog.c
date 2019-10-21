#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code for Holberton School students.
 * @d: struct
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->owner == NULL)
d->owner = "(nil)";
if (d->name == NULL)
d->name = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
