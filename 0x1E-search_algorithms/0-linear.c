#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search  - Entry point
 * @array: the array we are searching
 * @size: the size of it
 * @value: the value to search
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%li] = [%i]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}

