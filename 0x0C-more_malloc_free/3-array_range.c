#include "holberton.h"
#include <stdlib.h>
/**
* array_range - Entry point
* @min: min
* @max: max
*
* Description: Make an array with values from min to max
* Return: Array of ints
*/
int *array_range(int min, int max)
{
	int *ret, size = 0, i = 0, j = 0;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	ret = malloc(sizeof(int) * size);
	if (ret == NULL)
		return (NULL);
	for (i = min ; i <= max ; i++, j++)
		ret[j] = i;
	return (ret);
}
