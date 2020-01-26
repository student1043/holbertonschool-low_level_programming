#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - check the code for Holberton School students.
 * @ht: hash table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *my_node;
unsigned long int k;
if (!ht)
return;
for (k = 0; k < ht->size; k++)
{
while (ht->array[k])
{
my_node = ht->array[k]->next;
free(ht->array[k]->value);
free(ht->array[k]->key);
free(ht->array[k]);
ht->array[k] = my_node;
}
}
free(ht->array);
free(ht);
}
