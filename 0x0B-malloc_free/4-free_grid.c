#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a 2D array
 * @grid: Pointer to the 2D array
 * @height: Height of the grid
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
