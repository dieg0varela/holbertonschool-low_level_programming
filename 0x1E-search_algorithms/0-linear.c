#include "search_algos.h"

/**
* linear_search - Entry point
* @array: pointer to array
* @size: size of the array
* @value: value to search
*
* Description: Linear Search
* Return: The first index of array where found value
*/

int linear_search(int *array, size_t size, int value)
{
	size_t pichu;

	if (!array)
		return (-1);

	for (pichu = 0 ; pichu < size ; pichu++)
	{
		printf("Value checked array[%lu] = [%i]\n", pichu, array[pichu]);
		if (array[pichu] == value)
		{
			return (pichu);
		}
	}
	return (-1);
}
