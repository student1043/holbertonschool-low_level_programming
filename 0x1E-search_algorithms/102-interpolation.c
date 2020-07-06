#include "search_algos.h"

/**
 * interpolation_search - Search using interpolation algorithm.
 * @array: array
 * @size: size
 * @value: value
 * Return: -1 or 1.
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t l, small = 0, big;
if (array == NULL)
return (-1);
big = size - 1;
while (big >= small)
{
l = small + (((double)(big - small) / (array[big] - array[small]))
* (value - array[small]));
if (l < size)
printf("Value checked array[%ld] = [%d]\n", l, array[l]);
else
{
printf("Value checked array[%ld] is out of range\n", l);
break;
}
if (array[l] == value)
return (l);
if (array[l] > value)
big = l - 1;
else
small = l + 1;
}
return (-1);
}
