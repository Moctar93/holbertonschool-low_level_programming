#include <stdlib.h>
/**
 * free_grid - unction that frees a 2 dimensional grid
 *@height: taille
 *@grid: double pointeur
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
