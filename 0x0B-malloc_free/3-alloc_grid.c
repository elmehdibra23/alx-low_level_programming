#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocates a 2D grid of int and init to 0
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated grid, or NULL if failed
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = i; j >= 0; j--)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
