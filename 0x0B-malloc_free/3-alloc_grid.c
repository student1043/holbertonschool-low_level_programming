#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **s;
if (width <= 0 || height <= 0)
{
return (NULL);
}
s = (int **)malloc(sizeof(int *) * height);
if (s == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
s[i] = (int *)malloc(sizeof(int) * width);
if (s[i] == NULL)
{
for (j = 0; j < i; i++)
{
free(s[j]);
free(s);
return (NULL);
}
}
for (j = 0; j < width; j++)
{
s[i][j] = 0;
}
}
return (s);
}
