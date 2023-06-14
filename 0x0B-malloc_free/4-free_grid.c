#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: parameter double pointer int.
 * @height: parameter int height.
 */

void free_grid(int **grid, int height)
{
    int i;
    for (i = 0; i < height; i++)   
    {
        free(grid[i]);
    }
    free(grid);
}