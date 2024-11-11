#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to the 2D array
 * @height: number of rows in the grid
 *
 * Description: frees a 2 dimensional grid
 * Return: NULL
 */

void free_grid(int **grid, int height)
{

int i = 0;

if (grid == NULL)


for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);

}
