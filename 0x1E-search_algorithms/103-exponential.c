#include "search_algos.h"

/**
 * _binary_search - Searches using binary search.
 * @array: array
 * @left: left
 * @right: right
 * @value: value
 *
 * Return: index
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
size_t l;

if (array == NULL)
return (-1);

while (right >= left)
{
printf("Searching in array: ");
for (l = left; l < right; l++)
printf("%d, ", array[l]);
printf("%d\n", array[l]);

l = left + (right - left) / 2;
if (array[l] == value)
return (l);
if (array[l] > value)
right = l - 1;
else
left = l + 1;
}

return (-1);
}

/**
* exponential_search - Searches using exponential search.
* @array: array
* @size: size
* @value: value
*
* Return: index
*/
int exponential_search(int *array, size_t size, int value)
{
size_t l = 0, p;

if (array == NULL)
return (-1);

if (array[0] != value)
{
for (l = 1; l < size && array[l] <= value; l = l * 2)
printf("Value checked array[%ld] = [%d]\n", l, array[l]);
}

if (l < size)
p = l;
else
p = size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", l / 2, p);
return (binary_search(array, l / 2, p, value));
}
