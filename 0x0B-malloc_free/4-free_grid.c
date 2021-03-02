#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - Entry point
* @grid: matrix
* @height: int
*
* Description: Free a matrix
* Return: Nothing
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
