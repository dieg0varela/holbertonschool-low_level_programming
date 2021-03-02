#include "holberton.h"
#include <stdlib.h>
/**
* alloc_grid - Entry point
* @width: int
* @height: int
*
* Description: Make a grid with 0
* Return: Pointer to pointer
*/
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **col;
	int *row;

	if ((width || height) <= 0)
		return (NULL);

	col = malloc(height);
	if (col == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		row = malloc(width);
		if (row == NULL)
			return (NULL);
		for (j = 0 ; j < width ; j++)
		{
			row[j] = 0;
		}
		col[i] = row;
	}
	return (col);
}
