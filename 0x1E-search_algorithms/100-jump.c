#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Search using jump search algorithm.
 * @array: array
 * @size: size
 * @value: value
 * Return: -1 or 1.
 */
int jump_search(int *array, size_t size, int value)
{
size_t i = 0, skip = 0, next = 0;

if (array == NULL || size == 0)
return (-1);

next = sqrt(size);
while (skip < size && array[skip] < value)
{
printf("Value checked array[%ld] = [%d]\n", skip, array[skip]);
skip += next;
}

i = skip - next;
printf("Value found between indexes [%ld] and [%ld]\n", i, skip);

if (skip >= size)
skip = size - 1;

for (; i <= skip; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
