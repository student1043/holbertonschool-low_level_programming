#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - check the code for Holberton School students.
 * @ht: hash table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *my_node;
unsigned long int k;
int l = 0;
if (!ht || !ht->array)
return;
printf("{");
for (k = 0; k < ht->size; k++)
{
my_node = ht->array[k];
while (my_node)
{
if (l)
printf(", ");
printf("'%s': '%s'", my_node->key, my_node->value);
l = 1;
my_node = my_node->next;
}
}
printf("}\n");
}
